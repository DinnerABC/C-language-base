#include<stdio.h>
int main(void){
	
	int y;
	double n;
	scanf("%lf",&n);
	if(n<0)
		y=-1;
	else if(n==0)
		y=0;
	else
		y=1;
	
	printf("sign(%.0lf) = %d",n,y); 
}
