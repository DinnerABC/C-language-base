#include<stdio.h>
#include<math.h>
int main(void)
{
	int i;
	float n,m,sum,item;
	scanf("%f %f",&m,&n);
	sum=0;
	
	if(m<=n){
		
		for(i=m;i<=n;i++){
			item=pow(i,2)+1.0/i;
			sum=sum+item;
		}
	}
	printf("sum = %.6f",sum);
	return 0;
}
