#include<stdio.h>
void xuanze(int a[ ],int n);
void maopao(int a[ ],int n);
int main(void){
	int n,i,k;
	int a[50];
	printf("����һ��n��");
	scanf("%d",&n); 
	printf("\n���� %d ������",n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("\nԭʼ����Ϊ��");
	printf(" ");
	for(i=0;i<n;i++)
		printf("%d  ",a[i]);
		printf("\n\n\n");
	
	printf("\t\t\t            --��ѡ������ʽ--  \n");
	printf("\n\t\t\t ************************************\n");
	printf("\n\t\t\t *          1--ѡ������          *\n");
	printf("\n\t\t\t *          2--ð������          *\n");
	printf("\n\t\t\t *          0--�˳�                *\n"); 
	printf("\n\t\t\t ************************************\n");
	printf("\n\t\t\t      --��ѡ���ܺţ�0-2��--��");
	scanf("%d",&k);
	
	switch(k){
		case 1: 
			printf("\n��ѡ����ǣ�1--ѡ������\n"); 
			printf("\nѡ����������У�\n");
			xuanze(a,n);
			printf("\n");
			break;
		case 2:
			printf("\n��ѡ����ǣ�2--ð������\n"); 
			printf("\nð����������У�\n");
			maopao(a,n);
			printf("\n");
			break;
		case 0: 
			printf("�����˳�....");
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
