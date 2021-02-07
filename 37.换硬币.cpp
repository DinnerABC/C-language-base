#include<stdio.h>
int main(void)
{
	int x,cnt;
	cnt=0;
	scanf("%d",&x);
	
	for(int k= x/5 ;k>0;k--){
		for(int i= x/2 ;i>0;i--){
			for(int j= x ;j>0;j--){
				if(k*5+i*2+j==x){
					printf("fen5:%d, fen2:%d, fen1:%d, total:%d\n",k,i,j,k+i+j);
					cnt++;
				}
			}
		}
	}
	printf("count = %d\n",cnt);
	return 0;
} 
