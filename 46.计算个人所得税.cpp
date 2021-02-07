#include<stdio.h>
int main(void){
	int n;
	double rate,y;
	scanf("%d",&n);
	
	if(n>0 && n<=1600){
		rate=0;
	}
	if(n>1600 && n<=2500){
		rate=0.05;
	}
	if(n>2500 && n<=3500){
		rate=0.1;
	}
	if(n>3500 && n<=4500){
		rate=0.15;
	}
	if(n>4500){
		rate=0.2;
	}
	y=rate*(n-1600);
	if(n==0)
		y=0.00;
	printf("%.2f",y);
	return 0;
}
