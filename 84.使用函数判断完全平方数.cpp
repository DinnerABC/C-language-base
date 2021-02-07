#include <stdio.h>
#include <math.h>

int IsSquare( int n );

int main()
{
    int n;

    scanf("%d", &n);
    if ( IsSquare(n) ) printf("YES\n");
    else printf("NO\n");

    return 0;
}

int IsSquare( int n ){
	double sum;
	sum=sqrt(n);
	if(sum==(int)sum)
		return 1;
	else 
		return 0;
}
