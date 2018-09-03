#include<stdio.h>
#include<string.h>
int main()
{
    int n,p,i,s,t;
    char str[1001];
    while(1)
    {
        scanf("%s",str);
        p=strlen(str);
        if(p==1 && str[0]=='0')
            break;
            s=0;
        for(i=0;i<p;i++)
        {
            //printf("%c",str[i]);
            n=str[i]-48;
                s=s*10+n;
                s=s%11;
                //printf("%d ",s);
        }
        if(s==0)
            printf("%s is a multiple of 11.\n",str);
        else
            printf("%s is not a multiple of 11.\n",str);
    }return 0;
}
//it is accepted..
