#include<stdio.h>
int main()
{
    int N,n,p,q,s[30],i,sum,t,c=1;
    scanf("%d",&N);
    while(N>=c)
    {
        sum=0;t=0;
        scanf("%d%d%d",&n,&p,&q);
        for(i=0;i<n;i++)
        {
            scanf("%d",&s[i]);
        }
        for(i=0;i<n;i++)
        {
            sum+=s[i];
            t++;
            if(sum>q)
            {
                t--;
                break;
            }
        }
        if(t>p)
            t=p;
        printf("Case %d: %d\n",c,t);c++;
    }return 0;
}
//it's accepted :)..
