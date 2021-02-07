#include <stdio.h>

int gcd( int x, int y );

int main()
{
    int x, y;

    scanf("%d %d", &x, &y);
    printf("%d\n", gcd(x, y));

    return 0;
}

int gcd( int x, int y ){
	int max,result,i;

	if(x>y)
		max=x;
	if(x<y)
		max=y;
	for(i=1;i<=max;i++){
		if(x%i==0 && y%i==0)
			result=i;
	}	
	return result;
}
