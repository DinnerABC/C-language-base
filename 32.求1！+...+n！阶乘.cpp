#include<stdio.h>
int main(void)
{
	int i,j,n;
	double sum,item;
	scanf("%d",&n);
	sum=0;
	
	for(j=1;j<=n;j++){
		item=1;
		
		for(i=1;i<=j;i++){
			item=item*i;
		}
		
		sum=sum+item;
	}
	
	printf("1!+2!+3!+....+n!=%.0lf",sum);
	return 0;
}
