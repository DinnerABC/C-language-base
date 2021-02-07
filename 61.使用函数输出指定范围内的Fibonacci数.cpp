#include <stdio.h>

int fib( int n );
void PrintFN( int m, int n );
	
int main()
{
    int m, n, t;

    scanf("%d %d %d", &m, &n, &t);
    printf("fib(%d) = %d\n", t, fib(t));
    PrintFN(m, n);

    return 0;
}

int fib(int n){
	int m1,m2,m,i;
	m1=m2=1;
	m=m1+m2;
	if(n==1 || n==2) return 1;
	else
		for(i=3;i<=n;i++){
			m=m1+m2;
			m1=m2;
			m2=m;
		}
	return m;
} 
void PrintFN(int m,int n){
	int i=1,k,c=0;
	if(m>0 && n>0 && m<=n && n<=10000){
		while(i){
			k=fib(i);
			if(k>n) break;
			if(k>=m && k<=n){
				printf("%d ",k);
				c++;
			}
		i++;
		}
	}
	if(c!=0)
		printf("\b");
	if(c==0)
		printf("No Fibonacci number");
}
