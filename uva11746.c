#include<stdio.h>
#define pf printf
#define sf scanf
int main()
{
    int T,c=1,walls[50],high,low,n,t,t1,i;
    sf("%d",&T);
    while(T>=c)
    {
        high=0,low=0,t=0,t1=0;
        sf("%d",&n);
        sf("%d",&walls[0]);
        t=walls[0];
        for(i=1;i<n;i++)
        {
            sf("%d",&walls[i]);
            t1=walls[i];
            if(t1>t)
                high++;
            else if(t1<t)
            low++;
            t=t1;
        }
        pf("Case %d: %d %d\n",c,high,low);
        c++;
    }return 0;
}
