#include<stdio.h>
int main(void)
{
	int x,y;
	scanf("%d",&x);
	
	y=x%5;
	
	if (y>0 && y<=3){
		printf("Fishing in day %d",x);
	}
	else{
		printf("Drying in day %d",x);
	}
	return 0;
}
