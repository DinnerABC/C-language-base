#include<stdio.h>
int main(void){
	int random,i,s=0,n,guess;
	scanf("%d %d",&random,&n);
	
	for(i=1;i<=n+1;i++){
		scanf("%d",&guess);
		s=s+1;
		if(s>n || guess<0){
			printf("Game Over");
			break;
		}
		else if(guess<random){
			printf("Too small\n");
		}
		else if(guess>random){
			printf("Too big\n");
		}
		else if(guess==random){
			if(i>3){
				printf("Good Guess!");
				break;
			}
			else if(i<=3 && i!=1){
				printf("Lucky You!");
				break;
			}
			else if(i==1){
				printf("Bingo!");
				break;
			}
		else if(i==n){
			printf("Game Over");
			break;
		}
		}
	}
	return 0;
} 
