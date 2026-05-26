import re
import sys
from pathlib import Path

# region macro definitions
replacementKey = "__TYPE__"

DATATYPE_Macro = """
    UPROPERTY(BlueprintReadOnly, Category="SenseData")
    __TYPE__ __TYPE__Data;
    UFUNCTION(BlueprintCallable, Category="SenseData")
	inline void Set__TYPE__(const __TYPE__ Value) {__TYPE__Data = Value;}
	UFUNCTION(BlueprintCallable, BlueprintPure, Category="SenseData")
	inline __TYPE__ Get__TYPE__() {return __TYPE__Data;}
	static inline USenseCustomData* Create__TYPE__(const __TYPE__ Value) { auto Data = NewObject<USenseCustomData>(); Data->Set__TYPE__(Value); return Data;}
"""

DATATYPEPOINTER_Macro = """
    UPROPERTY(BlueprintReadOnly, Category="SenseData")
    __TYPE__* __TYPE__PointerData;
    UFUNCTION(BlueprintCallable, Category="SenseData")
	inline void Set__TYPE__Pointer(__TYPE__* Value) {__TYPE__PointerData = Value;}
	UFUNCTION(BlueprintCallable, BlueprintPure, Category="SenseData")
	inline __TYPE__* Get__TYPE__Pointer() {return __TYPE__PointerData;}
	static inline USenseCustomData* Create__TYPE__Pointer(const __TYPE__* Value) { auto Data = NewObject<USenseCustomData>(); Data->Set__TYPE__Pointer(const_cast<__TYPE__*>(Value)); return Data;}
"""
# endregion

macros = {
    "DATATYPE": DATATYPE_Macro,
    "DATATYPEPOINTER": DATATYPEPOINTER_Macro
}

def Log(*contents):
    baseString = f"[DYNAMIC UTILITY AI PREPROCESSOR]: "
    for line in contents:
        baseString += str(line)
    print(baseString)

Log("hai :3")
Log("Preprocessor starting")

directory = sys.argv[1]
savePath = directory + "\\Plugins\\DynamicPersonalityAI\\Scripts\\Saved\\"

Log("Got directory ", directory)

savedFiles = {}

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
                    #Cache a copy of the file
                    if file.name not in savedFiles.keys():
                        savedFiles[file.name] = lines.copy()
                        Log("Cached copy of file ", file.name)

                    lineTokens = re.split(r'[()\t]', line)
                    macroType = lineTokens[1]
                    macroArg = lineTokens[2]
                    newLineContents = macros[macroType].replace(replacementKey, macroArg)
                    newLines.append(newLineContents)
                    Log("Expanded line ", lineCount, " In file ", file.name)
                    hadMacro = True
                    break
            if not hadMacro:
                newLines.append(line)
            lineCount += 1
        f.close()
        with open(file, "w") as writableFile:
            writableFile.writelines(newLines)
            writableFile.close()
            
Log("Saving original copies...")
for fileName in savedFiles.keys():
    with open(savePath+fileName+".saved", "w") as f:
        f.writelines(savedFiles[fileName])
        f.close()
    Log("Saved file ", fileName)
    
Log("Preprocessing complete!")