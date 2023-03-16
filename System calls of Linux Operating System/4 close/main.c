#include <stdio.h>
#include <fcntl.h>


void main(){
	int fd1=open("file1.txt",O_RDONLY,0);
	printf("fd1=%d\n",fd1);
	close(fd1);
	int fd2=open("file2.txt",O_RDONLY,0);
        printf("fd2=%d\n",fd2);

}
