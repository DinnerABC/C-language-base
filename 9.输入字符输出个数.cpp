#include<stdio.h>
int main(void)
{
	int letter,blank,digit,other;
	char ch;
	int i;
	
	letter=blank=digit=other=0;
	printf("����10���ַ�");
	
	for(i=1;i<=10;i++){
		ch=getchar();
		if ((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
			letter++;
		else if(ch==' ')
			blank++;
		else if (ch>='0' && ch<='9')
			digit++;
		else
			other++;
	} 
	
	printf("Ӣ���ַ�=%d���ո�=%d������=%d������=%d",letter,blank,digit,other);
	return 0;
} 
