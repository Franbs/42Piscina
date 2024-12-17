#!/bin/bash
FT_LINE1=7
FT_LINE2=15
cat /etc/passwd | sed "/^#/d" | awk "NR % 2 == 0"| cut -d: -f1 | rev | sort -r | awk "NR >= $FT_LINE1 && NR <= $FT_LINE2" | tr '\n' ', ' | sed 's/, *$/. /'
echo ""
