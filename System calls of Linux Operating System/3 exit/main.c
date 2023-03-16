#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


void main(){
	int j;
	for(j=0; j<10; j++){
		
		if(j==5)
			exit(0);
		else
		printf("%d\n",j);

	}
}


