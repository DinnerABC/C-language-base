#include <stdio.h>

int CountDigit( int number, int digit );

int main()
{
    int number, digit;

    scanf("%d %d", &number, &digit);
    printf("Number of digit %d in %d: %d\n", digit, number, CountDigit(number, digit));

    return 0;
}

int CountDigit( int number, int digit ){
	int change,item,count;
	change=number;
	if(number<0)
		change=-change;
	do{
		item=change%10;
		if(item==digit){
			count++;
		}
		change=change/10;
	}while(change>0);
	return count;
}
