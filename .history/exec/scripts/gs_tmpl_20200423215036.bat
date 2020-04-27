@echo off
setlocal

set SCR_LOC=%cd%
set EXE_LOC=%SCR_LOC%/..
set PRJ_LOC=%EXE_LOC%/..
set TOOL_LOC=%EXE_LOC%/tools
set ARM_TOOL_LOC=%TOOL_LOC%/arm-tool
set CYG_TOOL_LOC=%TOOL_LOC%/Cygwin
set CYGPAHT=%TOOL_LOC%/bin/cygpath.exe
set ARMCC5_ASMOPT=%ARM_TOOL_LOC%
set ARMCC5_CCOPT=%ARM_TOOL_LOC%
set ARMCC5_FROMELFOPT=%ARM_TOOL_LOC%
set ARMCC5_LINKOPT=%ARM_TOOL_LOC%

echo 'PRJ_LOC:'
echo %PRJ_LOC%
echo ''
echo 'TOOL_LOC:'
echo %TOOL_LOC%
echo ''
echo 'ARM_TOOL_LOC:'
echo %ARM_TOOL_LOC%
echo ''
echo 'CYG_TOOL_LOC:'
echo %CYG_TOOL_LOC%
echo ''
echo 'CYGPAHT:'
echo %CYGPAHT%
echo ''
echo 'ARMCC5_ASMOPT:'
echo %ARMCC5_ASMOPT%
echo ''
echo 'ARMCC5_CCOPT:'
echo %ARMCC5_CCOPT%
echo ''
echo 'ARMCC5_FROMELFOPT:'
echo %ARMCC5_FROMELFOPT%
echo ''
echo 'ARMCC5_LINKOPT:'
echo %ARMCC5_LINKOPT%
echo ''
echo 'ARM Tool Chain: Compiling done:'
echo ''

endlocal