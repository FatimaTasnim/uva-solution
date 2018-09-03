#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,B,H,W,P,a,yes,cost,i,j;
    vector <int> v;
    while(scanf("%d%d%d%d",&N,&B,&H,&W)==4)
    {
        yes=0;
        for(j=0;j<H;j++){
        scanf("%d",&P);
        for(i=0;i<W;i++)
        {
            scanf("%d",&a);
            if(a>=N)
                yes= 1;
        }
        if(yes==1)
        {
            cost=N*P;
            if(cost<=B)
                v.push_back(cost);
        }
        }
        if(v.size()==0)
            printf("stay home\n");
        else
        {
            sort(v.begin(),v.end());
            printf("%d\n",v[0]);
        }
        v.clear();
    }
}
