#include<stdio.h>
int main(void)
{
	int start,end,cha,gewei,shiwei,baiwei,qianwei;
	scanf("%d %d",&start,&end);
	cha=end-start;
	qianwei=cha/1000;
	baiwei=cha/100-qianwei*10;
	shiwei=cha/10-qianwei*100-baiwei*10;
	gewei=cha-qianwei*1000-baiwei*100-shiwei*10;
	printf("%d%d:%d%d",qianwei,baiwei,shiwei,gewei);
	return 0;
}

