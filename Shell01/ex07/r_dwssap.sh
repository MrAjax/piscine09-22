#!/bin/sh

FT_LINE1=7
FT_LINE2=15
cat /etc/passwd | sed '/^#/d' | sed -n 'n;p' | cut -d':' -f1 | rev | sort -r | sed -n "$FT_LINE1, $FT_LINE2 p" | sed 's/$/,/' | tr '\n' ' ' | sed 's/\(.*\), /\1./' | tr -d '\n'

