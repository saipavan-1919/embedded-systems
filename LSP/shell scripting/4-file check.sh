#!/bin/sh

if [ $# -eq 1 ]
then
	if [ -f $1 ]
	then
		echo "file exist"
	else
		echo "file does not exist"
	fi
else
	echo "error,no.of arguments not equal to one"
fi
