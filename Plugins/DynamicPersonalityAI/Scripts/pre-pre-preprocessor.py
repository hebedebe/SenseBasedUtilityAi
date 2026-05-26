import re
import sys
# import glob
import colorama
from pathlib import Path

colorama.init()

exit()

replacementKey = "__TYPE__"

DATATYPE_Macro = """
    UPROPERTY(BlueprintReadOnly, Category="SenseData")
    __TYPE__ __TYPE__Data;
    UFUNCTION(BlueprintCallable, Category="SenseData")
	inline void Set__TYPE__(const __TYPE__ Value) {__TYPE__Data = Value;}
	UFUNCTION(BlueprintCallable, BlueprintPure, Category="SenseData")
	inline __TYPE__ Get__TYPE__() {return __TYPE__Data;}
	static inline  USenseCustomData* Create__TYPE__(const __TYPE__ Value) { auto Data = NewObject<USenseCustomData>(); Data->Set__TYPE__(Value); return Data;}
"""

DATATYPEPOINTER_Macro = """"""

macros = {
    "DATATYPE": DATATYPE_Macro,
    "DATATYPEPOINTER": DATATYPEPOINTER_Macro
}

def Log(*contents):
    baseString = f"{colorama.Fore.YELLOW}[DYNAMIC UTILITY AI PREPROCESSOR]: "
    for line in contents:
        baseString += str(line)
    baseString += colorama.Fore.RESET
    print(baseString)

Log("Preprocessor starting")

directory = sys.argv[1]

Log("Got directory ", directory)

files = Path(directory).rglob("*.h")
fileCount = 0
for file in files:
    # Log("Checking file ", file)
    with open(file, "r+") as f:
        lines = f.readlines()
        newLines = []
        lineCount = 0
        for line in lines:
            hadMacro = False
            for macroName in macros.keys():
                if macroName in line and line[0] != "#":
                    lineTokens = re.split(r'[()\t]', line)
                    Log("Found tokens ", lineTokens, " at line ", lineCount)
                    with open (f"{file.name}.saved", "w") as saveFile:
                        saveFile.write(f.read())
                        saveFile.close()
                    macroType = lineTokens[1]
                    macroArg = lineTokens[2]
                    newLineContents = macros[macroType].replace(replacementKey, macroArg)
                    newLines.append(newLineContents)
                    Log("Expanded line ", lineCount)
                    hadMacro = True
                    break
            if not hadMacro:
                newLines.append(line)
            lineCount += 1
        f.close()
        with open(file, "w") as writableFile:
            writableFile.writelines(newLines)
            writableFile.close()
            
