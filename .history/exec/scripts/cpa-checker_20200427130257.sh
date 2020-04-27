#!/bin/bash
#!!!!!!!!!!!!!!!!!!!!! Don't ferget to set CRLF to LF !!!!!!!!!!!!!!!!!!!!!
echo "Start shell script "$0
###################################### functions ######################################
#wrong_param()
# 1 - wrong amount of parameters
# 2 - no such file  
# 3 - mode option not existend
infoMsg () {
    echo "cpa-checker script:"
    echo "cpa-checker <Analysis Option> <Zu analysierendes File>"
    echo "Analysis Options:"
    echo "-v | --           :\t Value Analysis"
    echo "-r | --           :\t Reaching-Definitions Analysis"
    echo "-i | --           :\t Interval Analysis"
    echo "-s | --           :\t Sign Analysis"
    echo ""
}
errorMsg ()
{
    case $1 in
        1)
            echo "Wrong amount of paramters."
            ;;
        2)
            echo "File doesn't exist"
            ;;
        3)
            echo "Choosen option not provided by the script."
            ;;
        *)
            echo "Something in the script went wrong."
            ;;
    esac
}
errorHandle ()
{
    infoMsg
    errorMsg $1
    exit $1
}
#cpa_start
# param1:  Analysis Options
# param2:  File
cpa_start ()
{
    echo "Choosen Option: "$1
    ./exec/tools/cpachecker/scripts/cpa.sh $1 $2 -setprop analysis.checkCounterexamples=false -setprop solver.solver=SMTInterpol -setprop cpa.predicate.encodeBitvectorAs=INTEGER -setprop cpa.predicate.encodeFloatAs=RATIONAL
}
#####################################################################################

if [ $# -eq 2 ] ; then
    if test -f $2 ; then 
    case $1 in
        -v|--valueAnalysis-NoCegar-join|-valueAnalysis-NoCegar-join)
            cpa_start -valueAnalysis-NoCegar-join $2
            ;;
        -r|-reachingdefinitionARG|--reachingdefinitionARG)
            cpa_start -reachingdefinitionARG $2
            ;;
        -i|-intervalAnalysis-join|--intervalAnalysis)
            cpa_start -intervalAnalysis-join $2
            ;;
        -s|-signAnalysis|--signAnalysis)
            cpa_start -signAnalysis $2
            ;;
        -h|--help)
            infoMsg
            ;;
        *)
            errorHandle 3
            ;;
    esac
    else
        errorHandle 2
    fi

else
    errorHandle 1
fi

echo 'Finished shell script' $0 '.'
#EOF