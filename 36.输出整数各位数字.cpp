#include<stdio.h>
#include<math.h>
int main (void) 
{
	int a,b,t,i,num;
	t=0;
	scanf("%d",&num);
	a=num;
	
	if(num==0)
		printf("0 ");
	else
	
	do{
		a=a/10;
		t++;
	}while(a>0);
	
	while(t>0){
		b=pow(10,t-1);
		printf("%d ",num/b);
		t--;
		num=num%b;
	}
	return 0;
}
