#include<stdio.h>
#include<math.h>
int main (void)
{
	double money,rate,interest,year;
	scanf("%lf %lf %lf",&money,&year,&rate);
	interest=money*pow(1+rate,year)-money;
	printf("interest = %.2f",interest);
	return 0;
}
