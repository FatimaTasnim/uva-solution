#include<stdio.h>
#include<string.h>
int main()
{
    char ch[1000],demo;
    int i,p;
    while(gets(ch))
    {
        if(ch[0]=='*')
            break;
            if(ch[0]>=65 && ch[0]<=90){
                p=ch[0]+32;
                demo=p;}
        else
        demo=ch[0];
        for(i=1;ch[i];i++)
        {
            if(ch[i]==' ')
            {
                if(ch[i+1]>=65 && ch[i+1]<=90)
                ch[i+1]+=32;
            if(ch[i+1]!=demo){
                printf("N\n");
                break;}
            }
        }
        if(ch[i]=='\0')
            printf("Y\n");
    }
    return 0;
}
//it's accepted :)
