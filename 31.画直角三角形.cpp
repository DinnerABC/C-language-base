#include<stdio.h>
int main(void)
{
	int j,i,n;
	scanf("%d",&n);
	
	for (j=1;j<=n;j++){
		
		for(i=1;i<=j;i++){
			printf("*");
		}
		
		printf("\n");
	}
	return 0;
}
