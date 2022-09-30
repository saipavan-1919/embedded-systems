#!/bin/sh


	if [ -d $1 ]
	then
		echo "$1 is  a directory"
	else
		if [ -f $1 ]
		then
		echo "$1 is a file"
	        fi
	fi
	if [ -d $2 ]
	then
		echo "$2 is  a directory"
	else
		if [ -f $2 ]
		then
		echo "$2 is a file"
                fi
	fi
