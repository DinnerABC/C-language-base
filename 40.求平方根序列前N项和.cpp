#include<stdio.h>
#include<math.h>
int main(void)
{
	int n;
	double i,sum,item;
	scanf("%d",&n);
	sum=0;
	
	for(i=1;i<=n;i++){
	
		item=sqrt(i);
		sum=sum+item;
	}
	printf("sum = %.2lf",sum);
	return 0;
}
