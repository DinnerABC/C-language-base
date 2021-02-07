#include <stdio.h>

double mypow( double x, int n );

int main()
{
    double x;
    int n;

    scanf("%lf %d", &x, &n);
    printf("%f\n", mypow(x, n));

    return 0;
}

double mypow( double x, int n ){
	double sum;
	
	if(n==1)
		sum = x;
	else if(n==0)
		sum=1;
	else
		sum=mypow(x, n-1)*x;
	return sum;

}
