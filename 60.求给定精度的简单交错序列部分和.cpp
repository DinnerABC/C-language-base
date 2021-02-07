#include<stdio.h>  
#include<math.h>  
int main(void){  
	int i=1,k=1;  
	double sum=0,t,n;  
  
	scanf("%lf",&n);  

	do{  
        t=k*1.0/(3*i-2);   
        sum+=t;  
        k=-k;  
        i++;  
    }while(fabs(t)>n);  
  
    printf("sum = %f", sum);  
  
  
    return 0;  
}  
