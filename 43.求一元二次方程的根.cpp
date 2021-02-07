#include<stdio.h>
#include<math.h>
int main(void)
{
	double a,b,c,d;
	
	scanf("%lf %lf %lf",&a,&b,&c);
	d=b*b-4*a*c;
	
	if(a==0){
		if(b==0){
			if(c==0)
				printf("Zero Equation");
			else
				printf("Not An Equation");
			}
		else
			printf("%0.2f",-c/b);
		}
	else{
		if(d>=0)
			printf("%0.2f\n%0.2f",(-b+sqrt(d))/(2*a),(-b-sqrt(d))/(2*a));
		else
			printf("%0.2f+%0.2fi\n%.2f-%.2fi",-b/(2*a),sqrt(-d)/(2*a),-b/(a*2),sqrt(-d)/(2*a));
	}
	return 0;
} 
