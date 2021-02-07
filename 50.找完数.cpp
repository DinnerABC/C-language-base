#include<stdio.h>
int main(void){
	
	int m,n,i,j,x,sum;
	scanf("%d %d",&m,&n);
	
	for(i=m;i<=n;i++){
		sum=0;
		for(x=1;x<=i;x++){
			if(i%x==0){
				sum+=x;
			
			if(sum==i){
				printf("%d = ",i);
				for(j=1;j<=i;j++){
					if(i%j==0){
						printf("%d",j);
					}
				
				}
				printf("\n");
			}
			}
		}
	}
} 
