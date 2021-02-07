#include <stdio.h>  
int fact(int n);  
int main(){  
	int i,n;  
	long e=1;  
	
	scanf("%d", &n);  
	
	for(i=1;i<=n;i++)

		e+=1.0/fact(i);  
  
	printf("%.8l\n",e);  
  
	return 0;  
}  
  
int fact(int n){  
    if(n<=1)  
        return 1;  
    return n*fact(n-1);  
}  
