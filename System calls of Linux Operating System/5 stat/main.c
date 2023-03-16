
#include <stdio.h>
#include <sys/stat.h>

void main(){
	struct stat sfile;
	stat("a.out",&sfile);
	printf("Mode:%o",sfile.st_mode);
}

