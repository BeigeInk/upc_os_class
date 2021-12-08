grep class$1 /etc/group >& /dev/null
if [ $? -ne 0 ]
then
	groupadd class$1
fi
if [ $2 -le 9 ]
then
	stu=stu0$2
else
	stu=stu$2
fi

grep $stu /etc/passwd >& /dev/null
if [ $? -ne 0 ]
then
	useradd $stu -g class$1 -s /bin/csh
else
	echo '用户已经存在'
fi

