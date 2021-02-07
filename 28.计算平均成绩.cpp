#include<stdio.h>
int main(void)
{
	int count,num;
	double grade,average,sum;
	
	count=num=sum=0;
	printf("输入成绩:");
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
		printf("平均值为%.2f\n",average);
		printf("不及格人数为%d",num);
	}
	else{
		
	}
	return 0;
} 
