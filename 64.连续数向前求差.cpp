#include<stdio.h>
int main(void){
	int i,n,count=0;
	double sum=0;
	
	scanf("%d",&n);
	double a[n];
	sum=0;
	for(i=0;i<n;i++){
		scanf("%lf",&a[i]);
	}
	for(i=0;i<n-1;i++){
		sum = a[i+1]-a[i] ;
		
		count++;

		if(count<=3){
			printf("%.0lf",sum);
				if(count!=3 || count!=6 || count!=9){
					printf(" ");
			}
		}
		if(count>=3){
			printf("%d\n");
			count=0;
		}
	}
	return 0;
}
