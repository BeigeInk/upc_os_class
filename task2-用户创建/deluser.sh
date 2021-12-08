i=1
while [ $i -le $1 ]
do
	GROUPNAME=class$i
	j=1
	while [ $j -le $2 ]
	do
		if [ $j -le 10 ]
		then
			USERNAME=class${i}stu0${j}
		else
			USERNAME=class${i}stu${j}
		fi
		userdel $USERNAME
		j=$[$j+1]
	done
	groupdel $GROUPNAME
	i=$[$i+1]
done

