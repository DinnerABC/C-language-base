#include <stdio.h>

int sign( int x );

int main()
{
    int x;

    scanf("%d", &x);
    printf("sign(%d) = %d\n", x, sign(x));

    return 0;
}

int sign( int x ){
	int y;
	if(x>0)
		y=1;
	else if(x<0)
		y=-1;
	else
		y=0;
	return y;
}
