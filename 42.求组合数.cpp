#include<stdio.h>

int fact(int n){
	
	int ans=1,i;
	if(n<=1)
		return 1;
	for(i=1;i<=n;i++){
		ans*=i;
	}
		return ans;
}

int main()
{
	int n,m;
	double sum,item;
	
	scanf("%d %d",&m,&n);
	if(m<=n){
			
		item=fact(m)*fact(n-m);
		sum=fact(n) / item;
		printf("result = %.0lf",sum);
	}
	

	return 0;
}
