#include<stdio.h>
int main(void)
{
	int N,x1,sum;
	scanf("%d",&N);
	x1=1;
	sum=0;
	while(N-1>0){
		sum=(1+x1)*2;
		x1=sum;
		N--;
	}
	printf("%d",sum);
	return 0;
}
