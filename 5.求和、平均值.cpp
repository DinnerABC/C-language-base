#include<stdio.h>
int main(void)
{
	double a,b,c,d;
	float average;
	int sum;
	scanf("%lf %lf %lf %lf",&a,&b,&c,&d);
	
	sum=a+b+c+d;
	average=(a+b+c+d)/4;
	
	printf("Sum = %d; Average = %.1f",sum,average);
	return 0;
}
