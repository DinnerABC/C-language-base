#include<stdio.h>
int main(void)
{
	int i,m;
	
	printf("输入一个数:");
	scanf("%d",&m);
	
	for(i=2;i<=m/2;i++){
		if(m%i==0)
			break;
	}
	
	if(i>m/2 && m!=1)
		printf("%d是一个素数\n",m);
	else
		printf("%d不是一个素数",m);
	
	return 0;
}
