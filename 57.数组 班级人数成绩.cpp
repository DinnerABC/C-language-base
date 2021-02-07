#include<stdio.h>
int main(void){
	int i,n;
	double sum,aver;
	
	printf("请输入班级人数:");
	scanf("%d",&n);
	int a[n];
	sum=0;
	printf("请输入各学生分数：");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	
	aver=sum/n;
	printf("\n平均值=%.2f\n",aver);
	
	printf("\n大于平均值的:");
	for(i=0;i<n;i++){
		if(a[i]>aver)
			printf("%d ",a[i]);
	}
	
	printf("\n小于平均值的:");
	for(i=0;i<n;i++){
		if(a[i]<aver)
			printf("%d ",a[i]);
	}

	printf("\n及格的有：");
	for(i=0;i<n;i++){
		if(a[i]>=60);
			printf("%d ",a[i]);
	} 
	
	printf("\n不及格的有：");
	for(i=0;i<n;i++){
		if(a[i]<60);
			printf("%d ",a[i]);
	} 
	
	printf("\n");
	return 0;
}
