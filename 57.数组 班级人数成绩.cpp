#include<stdio.h>
int main(void){
	int i,n;
	double sum,aver;
	
	printf("������༶����:");
	scanf("%d",&n);
	int a[n];
	sum=0;
	printf("�������ѧ��������");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	
	aver=sum/n;
	printf("\nƽ��ֵ=%.2f\n",aver);
	
	printf("\n����ƽ��ֵ��:");
	for(i=0;i<n;i++){
		if(a[i]>aver)
			printf("%d ",a[i]);
	}
	
	printf("\nС��ƽ��ֵ��:");
	for(i=0;i<n;i++){
		if(a[i]<aver)
			printf("%d ",a[i]);
	}

	printf("\n������У�");
	for(i=0;i<n;i++){
		if(a[i]>=60);
			printf("%d ",a[i]);
	} 
	
	printf("\n��������У�");
	for(i=0;i<n;i++){
		if(a[i]<60);
			printf("%d ",a[i]);
	} 
	
	printf("\n");
	return 0;
}
