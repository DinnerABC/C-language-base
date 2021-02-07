#include<stdio.h>
int main(void)
{
	int i,j,n;
	double m,sum,item;
	m=1;
	sum=1;
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		m=1;
		
		for(j=1;j<=i;j++)
		{
			m=m*j;
		}
		
		item=1.0/m;
		sum=sum+item;
	}
	printf("%.8lf",sum);
}
