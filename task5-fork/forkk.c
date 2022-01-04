#include <stdio.h>
#include <sys/unistd.h>

int main(){
	fork();
	printf("pid=%d\n",getpid());
	printf("ppid=%d\n",getppid());
	return 0;
}
