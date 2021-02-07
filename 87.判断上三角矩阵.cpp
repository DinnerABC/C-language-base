#include<stdio.h>  
int main(void){  
	int n,i,j,sign=1;  
	int a[10][10];  
	scanf("%d",&n); 
	 
    for(i=0;i<n;i++){  
        for(j=0;j<n;j++){  
            scanf("%d",&a[i][j]);  
              
        }  
    }  
    for(i=0;i<n;i++){  
        for(j=0;j<n;j++){  
            if(i>j&&a[i][j]!=0)  
                sign=0;  
		}  
	}  
	if(sign)  
		printf("Yes");  
	else  
		printf("No");     
          
} 
