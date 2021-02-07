#include<stdio.h>
int main(void)
{
	
	double sum,item;
	double i,n;
	sum=0;
	scanf("%lf",&n);
	
	for (i=0;i<n;i++){
	
		item=1/(i+1);
		sum=item+sum;
		i=i+1;
		printf("%lf\n",i);
	}

	printf("sum = %.6f",sum);
	return 0;
	
}
