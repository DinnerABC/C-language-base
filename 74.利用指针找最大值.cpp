#include <stdio.h>

void findmax( int *px, int *py, int *pmax );

int main()
{	
    int max, x, y; 

    scanf("%d %d", &x, &y);
    findmax( &x, &y, &max ); 
    printf("%d\n", max);

    return 0;
} 

void findmax( int *px, int *py, int *pmax ){ 
	int max;
	
	*pmax=*px;
	if(*pmax<*py)
		*pmax=*py;
}
