#include<stdio.h>
#include<math.h>
double funpi(double e);
int main(void){
	double e,pi;
	
	printf("输入一个精度 e:");
	scanf("%lf",&e);
	
	pi=funpi (e);
	printf("pi = %f",pi);
	
	return 0;
}

double funpi(double e){
	int deno,flag;
	double item,sum;
	flag=1;
	deno=1;
	item=1.0;
	sum=0;
	
	while (fabs (item) >= e){
		item=flag*1.0/deno;
		sum=sum+item;
		flag=-flag; 
		deno=deno+2;
	}
	return sum*4;
}
