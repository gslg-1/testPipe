#!/bin/bash
#!!!!!!!!!!!!!!!!!!!!! Don't ferget to set CRLF to LF !!!!!!!!!!!!!!!!!!!!!
echo "Start shell script "$0
###################################### aliases ######################################
alias cpa="/cygdrive/d/workspace/git/rodir/cpachecker/scripts/cpa.sh"
alias cpa-end="-setprop analysis.checkCounterexamples=false -setprop solver.solver=SMTInterpol -setprop cpa.predicate.encodeBitvectorAs=INTEGER -setprop cpa.predicate.encodeFloatAs=RATIONAL"
#####################################################################################
###################################### functions ######################################
#wrong_param()
# 1 - wrong amount of parameters
# 2 - no such file  
wrong_param () {
    echo "cpa-checker"
    echo "Expected Input:"
    echo "cpa-checker <Analysis Option> <Zu analysierendes File>"
    echo "Analysis Options:"
    echo "-v:\t Value Analysis"
    echo "-r:\t Reaching-Definitions Analysis"
    echo "-i:\t Interval Analysis"
    echo "-s:\t Sign Analysis"
    exit $1
}
cpa_start ()
{
    cpa $1 $2 cpa-end
}
#####################################################################################




if [ $# -eq 2 ] ; then
    if test -f $2 ; then 
    case $1 in
        -v)
            cpu_start -valueAnalysis-NoCegar-join $2
        -r)
            cpu_start -reachingdefinitionARG $2
        -i)
            cpu_start -intervalAnalysis-join $2
        -s)
            cpu_start -signAnalysis $2
        *)
    else
        wrong_param 2
    fi

else
    wrong_param 1
fi

echo 'Finished shell script' $0 '.'
#EOF