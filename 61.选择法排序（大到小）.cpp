#include<stdio.h>
int main(void){
	int a[10];
	int i,k,n,temp,index;
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
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

	for(i=n-1;i>=0;i--){
		if(i<n-1 && i!=-1)
		printf(" ");
		printf("%d",a[i]);
	}
} 
