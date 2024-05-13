#!/bin/bash

content=$(cat "$1")
mydate=$(date +'%Y')
IFS=$'\n'
for line in $content
do
if [ $(($mydate - ($(echo $line | cut -d ',' -f 3 ) / 10000))) -ge 18 ]; then
    echo Dear Mr/Mrs "$(echo $line | cut -d ',' -f 2 )", "$(echo $line | cut -d ',' -f 1 )"
fi
done
