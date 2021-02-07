#include<stdio.h>
#include<math.h>
int main (void) 
{
	int a,b,t,i,num,item,sum,q;
	t=0;
	scanf("%d",&num);
	a=num;
	sum=0;
	q=0;
	
	if(num==0)
		printf("1 0");
	else
	
	do{
		a=a/10;
		t++;
	}while(a>0);
	
	while(t>0){
		b=pow(10,t-1);
		item=num/b;
		sum+=item;
		q++;
		t--;
		num=num%b;
	}
	printf("%d %d",q,sum);
	return 0;
}
