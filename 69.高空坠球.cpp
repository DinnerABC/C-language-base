#include <stdio.h>  
int main(void){  
	int n,count;  
	double distence,h;  
  
	scanf("%lf %d", &h, &n);  
	distence = h;
	count=1;  
	
	do{  
		h=0.5*h; 
		distence=distence+2*h;
 		count++;  
	}while(count<n); 
  
	h=0.5*h;
	if(n!=0)
		printf("%.1f %.1f",distence,h);  
	if(n==0){
		h=0;
		distence=0;
		printf("%.1f %.1f",distence,h);
	}

	return 0;  
}  
