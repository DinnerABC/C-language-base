#include<stdio.h>
int main(void)
{
	double count,num;
	
	count=0;
	printf("输入一个整数\n");
	scanf("%d",&count);
	
	if (count<0)
		count=-count;
		
	do{
		count=count/10;
		num++;	
	}while (count!=0);
	
	printf("这个数字的位数为：%d",num);
	return 0;
}
