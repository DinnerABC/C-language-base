#include<stdio.h>
void xuanze(int a[ ],int n);
void maopao(int a[ ],int n);
int main(void){
	int n,i,k;
	int a[50];
	printf("输入一个n：");
	scanf("%d",&n); 
	printf("\n输入 %d 个数：",n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("\n原始序列为：");
	printf(" ");
	for(i=0;i<n;i++)
		printf("%d  ",a[i]);
		printf("\n\n\n");
	
	printf("\t\t\t            --请选择排序方式--  \n");
	printf("\n\t\t\t ************************************\n");
	printf("\n\t\t\t *          1--选择排序法          *\n");
	printf("\n\t\t\t *          2--冒泡排序法          *\n");
	printf("\n\t\t\t *          0--退出                *\n"); 
	printf("\n\t\t\t ************************************\n");
	printf("\n\t\t\t      --请选择功能号（0-2）--：");
	scanf("%d",&k);
	
	switch(k){
		case 1: 
			printf("\n你选择的是：1--选择排序法\n"); 
			printf("\n选择排序后序列：\n");
			xuanze(a,n);
			printf("\n");
			break;
		case 2:
			printf("\n你选择的是：2--冒泡排序法\n"); 
			printf("\n冒泡排序后序列：\n");
			maopao(a,n);
			printf("\n");
			break;
		case 0: 
			printf("正在退出....");
			break; 
	}
	
	if(k==1 || k==2)
		for(i=0;i<n;i++)
			printf("%3d",a[i]);

	return 0;
}

void xuanze(int a[ ],int n){
		int k,i,temp,index;
	
		for(k=0;k<n-1;k++){
		index=k;
		for(i=k+1;i<n;i++){
			if(a[i]<a[index]){
				index=i;
			}
			temp=a[index];
			a[index]=a[k];
			a[k]=temp;
		}	
	}
}
void maopao(int a[ ], int n){
	int i,j,t;
	
	for(i=1;i<n;i++)
		for(j=0;j<n-i;j++)
			if(a[j]>a[j+1]){
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
}
