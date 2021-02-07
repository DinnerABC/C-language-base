#include<stdio.h>
int main(void)
{
	int i,j,n;
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		
		for(j=0;j<n-i;j++){
			printf(" ");
		}
		
		for(j=0;j<2*i+1;j++){
			printf("*");
		}
		
		printf("\n");
	}
	printf("\n");
	return 0;
}
