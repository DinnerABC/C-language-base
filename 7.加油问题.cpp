#include<stdio.h>
int main(void)
{
	double ninty,ninthr,nintse,disc,lit,type,y;
	char ch;
	
	ninty=6.95;
	ninthr=7.44;
	nintse=7.93;
	scanf("%lf %lf %c",&lit,&type,&ch);
	if(ch=='e' && type==90){
		disc=1-0.03;
		y=ninty*disc*lit;
	}
	else if (ch=='e' && type==93){
		disc=1-0.03;
		y=ninthr*disc*lit;
	}
	else if(ch=='e' && type==97){
		disc=1-0.03;
		y=nintse*disc*lit;
	}
	else if (ch=='m' && type==90){
		disc=1-0.05;
		y=ninty*disc*lit;
	}
	else if (ch=='m' && type==93){
		disc=1-0.05;
		y=ninthr*disc*lit;
	}
	else if (ch=='m' && type==97){
		disc=1-0.05;
		y=nintse*disc*lit;
	}
	else{
		
	}
	printf("%.2f",y);
	return 0;
}
