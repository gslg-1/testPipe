#!/bin/bash
#!!!!!!!!!!!!!!!!!!!!! Don't ferget to set CRLF to LF !!!!!!!!!!!!!!!!!!!!!
echo "Start shell script "$0
alias sl="ST-LINK_CLI -c SWD"
#alias sl-prg=sl-bare" -p"
alias sl-erase=sl" -me"
#alias sl-run="sl-bare -run"
#alias sl-rst="sl-bare -rst"
#alias sl-hrst="sl-bare -hardrst"
echo 'Finished shell script' $0 '.'
#EOF