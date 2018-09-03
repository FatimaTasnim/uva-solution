#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m, f,g, u, v,total,i,j,k;
    bool fg=false;
    int relative[101],cost[101],amount[101];
    scanf("%d",&g);
    for(f=1;f<=g;f++)
    {
        memset(relative,-1,sizeof(relative));
        memset(cost,-1,sizeof(cost));
        scanf("%d%d",&n,&m);
        total=0;
        for(j=0;j<n;j++)
            scanf("%d",&amount[j]);
        for(i=0;i<m;i++)
        {
            scanf("%d%d",&u,&v);
            if(cost[u]<amount[v])
            {
                cost[u]=amount[v];
                relative[u]=v;
            }
        }
        k=0;
        while(true){
               // cout << k << " "<<cost[k]<<endl;
            if(cost[k]==-1){
            break;
            }
            else {total+=cost[k]; k=relative[k];
            //cout<< total <<endl;
        }
        }
        //cout<<total <<endl;
        printf("Case %d: %d %d\n",f,total,k);
    }
}
