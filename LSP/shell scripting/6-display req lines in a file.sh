#!/bin/sh

# arguments = <filename> <starting line> <ending line>

if [ $# -eq 3 ]
then
	if [ -f $1 ]
	then
		head -$3 $1 | tail -$(expr $3 - $(expr $2 - 1))
	fi


else
	echo "sorry, no.of arguments not matching"
fi
