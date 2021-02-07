#include<stdio.h>
int main(void)
{
	int i,n,min,x;
	i=1;
	do{
		scanf("%d %d",&n,&min);
		
		if(min>n)
			min=n;
		i++;
		
	}while(i<=n);
	
	printf("%d",min);
	return 0;
}
