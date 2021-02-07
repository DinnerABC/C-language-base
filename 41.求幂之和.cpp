#include<stdio.h>
#include<math.h>
int main(void)
{
	int n;
	double i,sum,item;
	scanf("%d",&n);
	sum=0;
	
	for(i=1;i<=n;i++){
	
		item=pow(2,i);
		sum=sum+item;
	}
	printf("result = %.0lf",sum);
	return 0;
}
