#include<stdio.h>
int main(void)
{
	double count,num;
	
	count=0;
	printf("����һ������\n");
	scanf("%d",&count);
	
	if (count<0)
		count=-count;
		
	do{
		count=count/10;
		num++;	
	}while (count!=0);
	
	printf("������ֵ�λ��Ϊ��%d",num);
	return 0;
}
