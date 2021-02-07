#include<stdio.h>
int main (void)
{
	int fahr,lower,upper;
	double celsius;
	scanf("%d %d",&lower,&upper);

	if(lower<=upper && upper<=100){
		printf("fahr celsius\n");
		
		for(fahr=lower;fahr<=upper;fahr+=2){
			celsius=(5.0/9.0)*(fahr-32);
			printf("%d%6.1lf\n",fahr,celsius);
			
		}
	}	
	else
		printf("Invalid.\n");
} 
