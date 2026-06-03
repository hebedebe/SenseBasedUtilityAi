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

start "" "%PYTHON_PATH%" "%~1" %2