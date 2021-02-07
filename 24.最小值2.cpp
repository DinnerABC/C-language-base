#include<stdio.h>
int main(void)
{
	int i,n,k,min;
	min=0;
	scanf("%d",&n);

	for(i=0;i<n;i++){
		
		scanf("%d",&k);
		if (min>k){
			min=k;
		}
		if(n==1){
			min=k;
		}
	}

	printf("min = %d",min);
	return 0;
}
