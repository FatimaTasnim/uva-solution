#include<stdio.h>
int main()
{
    int a,b,c;
    char ch;
    while(scanf("%d%d%d",&a,&b,&c)==3)
    {
        if(a==b && b==c)
            ch='*';
        else if(a==b && c!=b)
            ch='C';
        else if(a==c && c!=b)
            ch='B';
        else if(c==b && a!=b)
            ch='A';
        printf("%c\n",ch);

    }
    return 0;
}
