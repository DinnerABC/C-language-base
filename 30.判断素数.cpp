#include<stdio.h>
int main(void)
{
	int i,m;
	
	printf("����һ����:");
	scanf("%d",&m);
	
	for(i=2;i<=m/2;i++){
		if(m%i==0)
			break;
	}
	
	if(i>m/2 && m!=1)
		printf("%d��һ������\n",m);
	else
		printf("%d����һ������",m);
	
	return 0;
}
