#/bin/sh

hostnamectl|grep Operating
hostnamectl|grep Architecture
hostnamectl|grep Kernel

ping -c "www.google.com"
if [ $? -ne 0 ]
then
        echo "internet status : on"
else
        echo "internet status : off"
fi

echo "ip address:"
ifconfig | grep "inet 1"

echo "memory usage:"
free -h

echo "system uptime"
uptime
