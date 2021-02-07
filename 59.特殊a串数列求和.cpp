#include<stdio.h>
int main(void){
	int i,a,n,k;
	int sum=0;
	scanf("%d %d",&a,&n);
	k=a;
	
	for(i=1;i<=n-1;i++){
		a=a*10;
		a=a+k;
		sum=sum+a;
	}
	
	sum=sum+k;
	printf("s = %d",sum);
	return 0;
}
