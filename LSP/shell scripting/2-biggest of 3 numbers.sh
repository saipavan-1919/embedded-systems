#!/bin/sh

if [ $# -eq 3 ]
then	
	if [ $1 -gt $2 ]
	then
		if [ $1 -gt $3 ]
		then
			echo "$1 is big number"
		else
			echo "$3 is big number"
		fi
	else
		if [ $2 -gt $3 ]
		then
			echo "$2 is big number"
		else
			echo "$3 is big number"
		fi
	fi
	
else
	echo "error, arguments are not equal to 3"
fi
