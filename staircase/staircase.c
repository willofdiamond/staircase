#include<stdio.h>

void staircase(int n);

int main(void){
	int n;
	printf("Enter the integer between 1 and 100 : ");
	scanf("%d",&n);
	staircase(n);
	
	return 0;
}


void staircase(int n){
	int i=0,j=0,k=n-1;
	
	for(i=0;i<n;i++,k--){
		j=0;int n=0;
		
			if(k)
			printf("%*c",k,' '); //for printing space
		while(j<i+1){
			printf("#");
			j+=1;
			
		}
		printf("\n");
		
		
		
	}
	
	
}
