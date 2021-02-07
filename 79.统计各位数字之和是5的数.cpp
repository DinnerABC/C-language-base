#include <stdio.h>

int is( int number );
void count_sum( int a, int b );

int main()
{
    int a, b;

    scanf("%d %d", &a, &b);
    if (is(a)) printf("%d is counted.\n", a);
    if (is(b)) printf("%d is counted.\n", b);
    count_sum(a, b);

    return 0;
}

int is( int number ){
	int c,d;
	int sum=0;
	while(number!=0) {
		c=number%10;
		sum=sum+c;
		number=number/10;
	}
	if(sum==5) {
		return 1;
	} else {
		return 0;
	}
}

void count_sum( int a, int b ){
	int m,p,q,i,count=0,sum,y=0;

	for(i=a;i<=b;i++){
	
		if(is(i)) {
			count++;
			y=y+i;
		}
	}
	printf("count = %d, sum = %d",count,y);
}
