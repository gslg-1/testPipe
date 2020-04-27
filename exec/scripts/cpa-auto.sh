#!/bin/bash
#!!!!!!!!!!!!!!!!!!!!! Don't ferget to set CRLF to LF !!!!!!!!!!!!!!!!!!!!!
echo "Start shell script "$0
cpa_withEnd ()
{
    echo "Choosen Option: "$1
    ./exec/tools/cpachecker/scripts/cpa.sh $@ -setprop analysis.checkCounterexamples=false -setprop solver.solver=SMTInterpol -setprop cpa.predicate.encodeBitvectorAs=INTEGER -setprop cpa.predicate.encodeFloatAs=RATIONAL
}
cpa_withoutEnd ()
{
    echo "Choosen Option: "$1
    ./exec/tools/cpachecker/scripts/cpa.sh $@
}

./exec/tools/cpachecker/scripts/cpa.sh -valueAnalysis-NoCegar-join -outputpath ./output/CPAchecker -setprop analysis.checkCounterexamples=false -setprop solver.solver=SMTInterpol -setprop cpa.predicate.encodeBitvectorAs=INTEGER -setprop cpa.predicate.encodeFloatAs=RATIONAL output/prebuild/main.p.c
#./exec/tools/cpachecker/scripts/cpa.sh -preprocess -valueAnalysis-NoCegar-join -outputpath ./output/CPAchecker -setprop analysis.checkCounterexamples=false -setprop solver.solver=SMTInterpol -setprop cpa.predicate.encodeBitvectorAs=INTEGER -setprop cpa.predicate.encodeFloatAs=RATIONAL ./exec/tools/cpachecker/doc/examples/example.c

echo 'Finished shell script' $0 '.'
#EOF