#include<stdio.h>
int main(void)
{
	int i,flag;
	float eps,sum;
	double item;
	sum=0;
	flag=1;
	i=1;
	scanf("%f",&eps);
	
	do{
		item=1/i;
		sum=sum+item*flag;
		flag=-flag;
		i=i+3;
	}while(item<=eps);
	
	printf("sum = %.6f",sum);
	return 0;
} 
