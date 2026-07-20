@echo off

set PYTHON_PATH=
for /f "delims=" %%i in ('where python.exe') do set PYTHON_PATH=%%i

if "%~1"=="" (
    echo Usage: %~nx0 ^<PythonFile^> ^<PythonArgs^>
    exit /b 1
)
if "%~2"=="" (
    echo Usage: %~nx0 ^<PythonFile^> ^<PythonArgs^>
    exit /b 1
)

@echo on

"C:\Program Files\Autodesk\RV-2025.0.0\bin\python.exe" "%~1" %2