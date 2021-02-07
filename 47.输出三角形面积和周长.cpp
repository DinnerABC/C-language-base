#include<stdio.h>
#include<math.h>
int main(void){
	
	double a,b,c;
	double area,s,per;
	scanf("%lf %lf %lf",&a,&b,&c);
	
	if(a+b>c && a+c>b && b+c>a){
		s=(a+b+c)/2;
		area=sqrt(s*(s-a)*(s-b)*(s-c));
		per=a+b+c;
		printf("area = %.2f; perimeter = %.2f",area,per);
	}
	else{
		printf("These sides do not correspond to a valid triangle");
	}
	return 0;
}
