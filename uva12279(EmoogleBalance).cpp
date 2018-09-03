#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,loss,happy,a,i,j=1;
    while(scanf("%d",&n))
    {
        if(n==0)break;
        loss=happy=0;
        for(i=1;i<=n;i++)
        {
            scanf("%d",&a);
            if(a>0) loss++;
            else happy++;
        }
        printf("Case %d: %d\n",j,loss-happy);
        j++;
    }
}
