#include<stdio.h>
double tiji(double h,double r);
double mianji(double h,double r);
int main(void){
	double h,r,V,S;
	scanf("%lf %lf",&h,&r);
	
	V=tiji(r,h);
	S=mianji(r,h);
	
	printf("V=%.2lf\nS=%.2lf",V,S);
	return 0;
}

double tiji(double h,double r){
	double result1; 
	
	result1=3.14*r*r*h;
	
	return result1;
}

double mianji(double h,double r){
	double result2;
	
	result2=2*3.14*r*r+2*3.14*r*h;
	
	return result2;
}


