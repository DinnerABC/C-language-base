#include<stdio.h>
int main(void)
{
	
	float sum,fenshu,i,n;
	sum=0;
	scanf("%f",&n);
	
	for (i=0;i<n;i++){
	
		fenshu=1/(i+1);
		sum=fenshu+sum;
	
	}

	printf("sum = %.6f",sum);
	return 0;
	
}
