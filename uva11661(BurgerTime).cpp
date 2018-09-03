#include<bits/stdc++.h>
#define MAX 2000001
using namespace std;
int main()
{
    int n,minima,i,r,d;
    char str[MAX];
    bool flag;
    while(scanf("%d",&n))
    {
        if(n==0)break;
        flag=false;r=d=-1;minima=MAX;
        scanf("%s",str);
        for(i=0;str[i];i++)
        {
            if(str[i]=='Z')
            {
                printf("0\n");
                flag=true;
                break;
            }
            else if(str[i]=='R')
               {
                    r=i;
                    if(d!=-1 && (r-d)<minima)
                    {
                        minima=r-d;
                    }
               }
            else if(str[i]=='D')
               {
                    d=i;
                    if(r!=-1 && (d-r)<minima)
                    {
                        minima=d-r;
                    }
               }
        }
        if(!flag)
            printf("%d\n",minima);
    }
}
