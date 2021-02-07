#include<stdio.h>
int main(void)
{
	int letter,blank,digit,other,i;
	char ch;
	letter=blank=digit=other=0;
	
	for(i=1;i<=10;i++){
		ch=getchar();
		switch(ch){
			case 'a':case 'b':case 'c':case 'd':case 'e':case 'f':case 'g':case 'h':
			case 'i':case 'j':case 'k':case 'l':case 'm':case 'n':case 'o':
			case 'p':case 'q':case 'r':case 's':case 't':case 'u':case 'v':case 'w':
			case 'x':case 'y':case 'z':
			case 'A':case 'B':case 'C':case 'D':case 'E':case 'F':case 'G':case 'H':
			case 'I':case 'J':case 'K':case 'L':case 'M':case 'N':case 'O':case 'P':
			case 'Q':case 'R':case 'S':case 'T':case 'U':case 'V':case 'W':case 'X':
			case 'Y':case 'Z':letter++;
				break;
			case ' ':case '\n':blank++;
				break;
			case '0':case '1':case '2':case '3':case '4':case '5':case '6':case '7':
			case '8':case '9':digit++;
				break;
			default:other++;
				break;
		}
	}
	printf("letter = %d, blank = %d, digit = %d, other = %d",letter,blank,digit,other);
	return 0;
}
