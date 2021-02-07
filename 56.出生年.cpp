#include<stdio.h>
int main(void){
	int i,year,n,old,aimyear;
	int gewei,shiwei,baiwei,qianwei;
	scanf("%d %d",&year,&n);
	
	for(i=year;i<=100000;i++){
		qianwei=i/1000;
		baiwei=i/100%10;
		shiwei=i/10%10;
		gewei=i%10;
		
		if(n==2){
			if(qianwei==baiwei || qianwei==shiwei || qianwei==gewei || baiwei==shiwei || baiwei==gewei || shiwei==gewei)
			
				break;	
		}
		
		if(n==3){
			if(qianwei==baiwei && qianwei==shiwei || qianwei==baiwei && qianwei==gewei || qianwei==shiwei && qianwei==gewei || baiwei==qianwei && baiwei==gewei)	
				if(qianwei==baiwei && qianwei==shiwei && qianwei==gewei && baiwei==shiwei && baiwei==gewei && gewei==shiwei)
				break;
		}
		
		if(n==4){
			if(qianwei!=baiwei && qianwei!=shiwei && qianwei!=gewei && baiwei!=shiwei && baiwei!=gewei && gewei!=shiwei)
				break;
		}
		
	}
		aimyear=qianwei*1000+baiwei*100+shiwei*10+gewei;
		old=aimyear-year;
		
		printf("%d %04d",old,aimyear);
		return 0;
}
