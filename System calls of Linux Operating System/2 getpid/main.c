#include <stdio.h>

void main(){
	int pid = getpid();
	int ppid = getppid();
	printf("Pid:%d\n", pid);
	printf("PPid:%d\n", ppid);
}

