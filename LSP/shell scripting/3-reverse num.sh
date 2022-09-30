#!/bin/sh

echo "enter number"
read num

rev=0
while [ $num -ne 0 ]
do
	rev=$(($rev * 10))
	rev=$(($num % 10 + $rev))
	num=$(($num / 10))
done


echo "reverse number = $rev"
