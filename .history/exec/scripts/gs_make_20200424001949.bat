@echo off
setlocal

set PRJ_ROOT=%cd%
set EXE_LOC=%PRJ_ROOT%/exec
set PRJ_LOC=%PRJ_ROOT%/code/*/
set TOOL_LOC=%EXE_LOC%/tools
set ARM_TOOL_LOC=%TOOL_LOC%/arm-tool
set CYG_TOOL_LOC=%TOOL_LOC%/Cygwin
set MAKE_EXE=%CYG_TOOL_LOC%/bin/make.exe
set CYGPAHT=%CYG_TOOL_LOC%/bin/cygpath.exe
set ARMCC5_ASMOPT=%ARM_TOOL_LOC%
set ARMCC5_CCOPT=%ARM_TOOL_LOC%
set ARMCC5_FROMELFOPT=%ARM_TOOL_LOC%
set ARMCC5_LINKOPT=%ARM_TOOL_LOC%

echo 
echo ------------------------------------------------ 
echo 

MAKE_EXE %PRJ_LOC%/Makefile

echo 
echo ------------------------------------------------ 
echo 
echo ARM Tool Chain: Compiling done:
echo 

endlocal