#include<stdio.h>
int main(void)
{
	int letter,blank,digit,other;
	char ch;
	int i;
	
	letter=blank=digit=other=0;
	printf("输入10个字符");
	
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
	
	printf("英文字符=%d，空格=%d，数字=%d，其他=%d",letter,blank,digit,other);
	return 0;
} 
