import sys
from pathlib import Path

def Log(*contents):
    baseString = "[DYNAMIC UTILITY AI PREPROCESSOR]: "
    for line in contents:
        baseString += str(line)
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