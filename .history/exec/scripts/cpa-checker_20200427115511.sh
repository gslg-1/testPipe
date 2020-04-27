#!/bin/bash
#!!!!!!!!!!!!!!!!!!!!! Don't ferget to set CRLF to LF !!!!!!!!!!!!!!!!!!!!!
echo "Start shell script "$0
###########################################################################
alias cpa="/cygdrive/d/workspace/git/rodir/cpachecker/scripts/cpa.sh"
alias cpa-valAna=cpa" -valueAnalysis-NoCegar-join examples/ex1.c -setprop analysis.checkCounterexamples=false -setprop solver.solver=SMTInterpol -setprop cpa.predicate.encodeBitvectorAs=INTEGER -setprop cpa.predicate.encodeFloatAs=RATIONAL"
###########################################################################



if [ $# -eq 2 ]
then
    wrong_param $0 7
else
    wrong_param 1

fi

echo 'Finished shell script' $0 '.'




#functions


#wrong_param()
#Parameter: 
#
wrong_param () {
    echo "cpa-checker"
    echo "Expected Input:"
    echo "cpa-checker <Analysis Option> <Zu analysierendes File>"
    echo "Analysis Options:"
    echo "-v:\t Value Analysis"
    echo "-r:\t Reaching-Definitions Analysis"
    echo "-i:\t Interval Analysis"
    echo "-s:\t Sign Analysis"
    exit 1
}

#EOF