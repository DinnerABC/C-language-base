#include<stdio.h>
int main(void)
{
	int i,n,j;
	char ch;
	scanf("%d %c",&n,&ch);
	
	if(n < 3 || n > 20){
        printf("error\n");
        return 0;
    }
    
	int col = (int)(n / 2.0 + 0.5);
	
	for(i = 0; i < col; i++)
    {
        for(j = 0; j < n; j++)
        {   
			printf("%c", ch);   
        }
		printf("\n");	
	}
	
	return 0;
}
