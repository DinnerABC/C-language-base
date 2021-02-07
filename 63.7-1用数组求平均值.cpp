#include<stdio.h>
int main(void){
	int i,n,cont=0;
	double sum,aver;
	
	scanf("%d",&n);
	int a[n];
	sum=0;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	if(n==0){
	  printf("average = 0.0\n");
	  printf("count = 0");
	}
	if(n!=0){
	aver=sum/n;
	printf("average = %.1lf\n",aver);

	for(i=0;i<n;i++){
		if(a[i]>=60)
			cont++;
	} 
	printf("count = %d",cont);
	}
	return 0;
}
