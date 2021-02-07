#include<stdio.h>
int main(void)
{
	int m,n,j,k,i;
	
	do{
		scanf("%d %d",&m,&n);
	}while(m<0 || n<0);
	
	j=m;
	
	while(j%n!=0)
		j=j+m;
		
	k=(m*n)/j;
	
	printf("%d %d",k,j);
	return 0;	
}
