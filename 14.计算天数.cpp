#include<stdio.h>
int main(void)
{
	int year,month,day,sum,sum1;
	sum=0;
	scanf("%d/%d/%d",&year,&month,&day);
	if((year%4==0 && year%100!=0) ||year%400==0){
		switch(month-1){
			case 12:sum=sum+31;
			case 11:sum=sum+30;
			case 10:sum=sum+31;
			case 9:sum=sum+30;
			case 8:sum=sum+31;
			case 7:sum=sum+31;
			case 6:sum=sum+30;
			case 5:sum=sum+31;
			case 4:sum=sum+30;
			case 3:sum=sum+31;
			case 2:sum=sum+29;
			case 1:sum=sum+31;
		}
	}
	else{
		switch(month-1){
			case 12:sum=sum+31;
			case 11:sum=sum+30;
			case 10:sum=sum+31;
			case 9:sum=sum+30;
			case 8:sum=sum+31;
			case 7:sum=sum+31;
			case 6:sum=sum+30;
			case 5:sum=sum+31;
			case 4:sum=sum+30;
			case 3:sum=sum+31;
			case 2:sum=sum+28;
			case 1:sum=sum+31;
		}
	}
	sum1=sum+day;
	printf("%d",sum1);
	return 0;	
}
