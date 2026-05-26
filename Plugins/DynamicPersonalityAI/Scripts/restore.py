import sys
# import glob
import colorama
from pathlib import Path

colorama.init()


def Log(*contents):
    baseString = f"{colorama.Fore.YELLOW}[DYNAMIC UTILITY AI PREPROCESSOR]: "
    for line in contents:
        baseString += str(line)
    baseString += colorama.Fore.RESET
    print(baseString)

Log("Beginning file restoration")

directory = sys.argv[1]
savePath = directory + "\\Plugins\\DynamicPersonalityAI\\Scripts\\Saved\\"

savedFilepaths = Path(savePath).rglob("*.saved")
savedFiles = {}

for file in savedFilepaths:
    fileName = file.name.replace(".saved", "")
    with open(file, "r") as f:
        fileContents = f.readlines()
        f.close()
        savedFiles[fileName] = fileContents

for file in Path(directory).rglob("*.h"):
    if file.name in savedFiles.keys():
        with open(file, "w") as f:
            f.writelines(savedFiles[file.name])
            Log("Restored file ", file.name)

Log("Restoration complete.")