#include <stdio.h>
#include <stdlib.h>

int mutax = 1;
int full = 0;
int empty = 10, x =0;

void prod(){
	--mutax;
	++full;
	--empty;
	x++;

	printf("\n Producer produces item %d",x);
	
	++mutax;
}

void cons(){
	--mutax;
	--full;
	++empty;

	printf("\n Consumer cosumer item %d", x);
	x--;
	++mutax;
}

int main(){
	int n, i;
	printf("\n 1. Producer\n 2. Consumer\n 3. Exit");

	for (i = 1;i > 0;i++){
		printf("\n Enter your choice: ");
		scanf("%d",&n);

		switch(n){
			case 1:
				if((mutax == 1) && (empty != 0)){
					prod();
				}
				else{
					printf("BUFFER FULL");
				}
				break;

			case 2:
				if((mutax == 1) && (full != 0)){
					cons();
				}
				else{
					printf("BUFFER FULL");
				}
				break;

			case 3: 
				exit(0);
				break;
		}
	}
}



