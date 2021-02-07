#include<stdio.h>
int main(void)
{
	int i,n,grade;
	int a,b,c,d,e;
	char ch;
	a=b=c=d=e=0;
	scanf("%d",&n);

	for(i=0;i<n;i++){
		scanf("%d",&grade);
		
		if (grade>=90 && grade<=100){
		
			ch='A';
			a++;
		}
		else if (grade<90 && grade>=80){
		
			ch='B';
			b++;
		}
		else if (grade<80 && grade>=70){
		
			ch='C';
			c++;
		}
		else if (grade<70 && grade>=60){
		
			ch='D';
			d++;
		}
		else{
		
			ch='E';
			e++;
		}
	}
	printf("%d %d %d %d %d",a,b,c,d,e);
	return 0;
}
