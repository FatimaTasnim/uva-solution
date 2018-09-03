#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a,st[1000],keep[1000];
    int i,j;
    while(scanf("%c %s",&a,st))
    {
getchar();
        if(a=='0' && st[0]=='0')break;
        j=0;
        for(i=0;st[i];i++)
        {
            if(st[i]!=a)
            {
                if(j==0 && st[i]=='0')
                    ;
                else
                {
                keep[j]=st[i];j++;
                }
            }
        }keep[j]='\0';
        if(keep[0]=='\0')
            printf("0\n");
else
    printf("%s\n",keep);
        memset(st, '\0', 1000);
        memset(keep, '\0', 1000);
    }
}
