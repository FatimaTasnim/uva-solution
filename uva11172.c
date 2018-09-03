#include<stdio.h>
int main()
{
    int T,n,p;
    char a;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d%d",&n,&p);
        if(n>p)
            a='>';
        else if(n<p)
            a='<';
        else
            a='=';
        printf("%c\n",a);
    }return 0;
}
//this is accepted.. :)
