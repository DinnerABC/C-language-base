#include<stdio.h>
int main(void)
{
	int count,num;
	double grade,average,sum;
	
	count=num=sum=0;
	printf("����ɼ�:");
	scanf("%lf",&grade);
	while(grade>=0){
		count++;
		sum=sum+grade;
			if(grade<=60)
				num++;
		scanf("%lf",&grade);
	}
	
	average=sum/count;
	
	if (count!=0){
		printf("ƽ��ֵΪ%.2f\n",average);
		printf("����������Ϊ%d",num);
	}
	else{
		
	}
	return 0;
} 
