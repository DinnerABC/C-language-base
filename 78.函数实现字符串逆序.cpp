#include <stdio.h>
#define MAXS 20

void f( char *p );
void ReadString( char *s ); /* �ɲ���ʵ�֣���ȥ���� */

int main()
{
    char s[MAXS];

    ReadString(s);
    f(s);
    printf("%s\n", s);

    return 0;
}

void f( char *p ){
    int i=0,q=0,h,huan;
    while(p[i]!='\0')
        i++;
    h=i-1;
    while(q<=h)
    {
        huan=p[q];
        p[q]=p[h];
        p[h]=huan;
        q++;
        h--;
    }
    return ;

}
