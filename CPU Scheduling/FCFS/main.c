#include <stdio.h>

main(){
	int i, n, bt[20], wt[20], tat[20], awt, atat;
	printf("enter number of process :");
	scanf("%d", &n);
	
	for(i=0; i<n; i++){
		printf("Enter the BT for the proces id %d :", i);
		scanf("%d", &bt[i]);
	}

	wt[0] = awt = 0;
	tat[0] = atat = bt[0];

	for(i=1; i<n; i++){
		wt[i] = wt[i-1] +bt[i-1];
		tat[i] = tat[i-1] +bt[i];
		awt = awt + wt[i];
		atat = atat + tat[i];
	}

	printf("\tProcess\tBurst Time\tWaiting Time\tTurnaround Time");
	for(i=0; i<n; i++){
		printf("\n\t P%d \t\t %d \t\t %d \t\t %d", i,bt[i],wt[i],tat[i]);
	}
	printf("\nAverage Waiting time : %d", awt);
	printf("\nAverage Turnaround Time :%d", atat/n);

}

