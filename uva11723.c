#include<stdio.h>
int main()
{
    int R,N,c=1,alpha,p,n;
    while(scanf("%d%d",&R,&N)==2)
    {
        if(R==0 && N==0)
            break;
        if((N+N*26)<R)
            printf("Case %d: impossible\n",c);
        else
        {
            alpha=N;
            p=R-N;
            for(p=0;p<=26;p++)
            {
               n=alpha+alpha*p;
               if(n>=R)
               {
                   printf("Case %d: %d\n",c,p);
                   break;
               }

            }
        }
c++;

    }return 0;
}
//it's correct :)
