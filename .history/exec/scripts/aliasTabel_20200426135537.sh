#!/bin/bash
echo 'Start shell script '$0
alias sl-bare='ST-LINK_CLI -c SWD'
alias alias sl-prog='sl-bare -p'
alias sl-erase='sl-bare -me'
alias sl-run='sl-bare -run'
alias sl-rst='sl-bare -rst'
alias sl-hrst='sl-bare -hardrst'
echo 'Finished shell script' $0 '.'
#EOF