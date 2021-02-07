#include<stdio.h>
int main (void)
{
	int choice,i;
	double price;
	
	printf("\n\n\n\n\n");
	
	for(i=1;i<=5;i++){
		scanf("%d",&choice);
		if(choice==0)
		break;
		switch(choice){
		case 1:price=3.00;break;
		case 2:price=2.00;break;
		case 3:price=4.00;break;
		case 4:price=10.00;break;
		}
	printf("%.2f\n",price);
	}
	return 0;
} 
