#!/bin/bash
#!!!!!!!!!!!!!!!!!!!!! Don't ferget to set CRLF to LF !!!!!!!!!!!!!!!!!!!!!
echo "Start shell script "$0
alias sl="ST-LINK_CLI -c SWD"
alias sl-erase=sl" -me"
alias sl-run=sl" -run"
alias sl-rst=sl" -rst"
alias sl-hrst=sl" -hardrst"
echo 'Finished shell script' $0 '.'
#EOF