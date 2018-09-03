#include<stdio.h>
int main()
{
    int R,N,c=1,alpha,p,n;
    while(scanf("%d%d",&R,&N)==2)
    {
        if(R==0 && N==0)
            break;
            alpha=0;
        if((N+N*26)<R)
            printf("Case %d: impossible\n",c);
            else
            {
               p=R-N;
               if(p>0){
               if(p%N!=0)
                    alpha++;
               alpha+=p/N;}
                printf("Case %d: %d\n",c,alpha);
            }
            c++;
    }
}
//it's also correct.. :)
