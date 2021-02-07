#include<stdio.h>
int main(void){
	int n,i;
	float fenzi=2,fenmu=1;
	float sum=0,item;
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		item=fenzi/fenmu;
		fenzi=fenmu;
		fenmu=fenzi+fenmu;
		sum+=item;
		printf("%.2lf %.2lf\n",item,sum);
	}
	printf("%.2lf",sum);
	return 0;
}
