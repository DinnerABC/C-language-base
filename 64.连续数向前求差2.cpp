#include<stdio.h>
int main(void){
	int n,i;
	scanf("%d",&n);
		int a[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=1;i<n;i++){
		if(i%3==1)
			printf("%d",a[i]-a[i-1]);
		else if(i%3==0)
			printf(" %d\n",a[i]-a[i-1]);
		else
			printf(" %d",a[i]-a[i-1]);
	}
	return 0;
}
