#include <bits/stdc++.h>
#define N 20001
using namespace std;
bool vis[N];
const int inf = N;
int dist[N];

int Dijkstra(int src,vector< vector<int> > adj)
{
    int path,cur,n;
    n=adj.size();
    for(int i = 0; i < n; ++i)
    {
        dist[i] = inf;
        vis[i]=false;
    }
    dist[src] = 0;
    for(int i = 0; i < n; ++i)
    {
        cur = -1;
        for(int j = 0; j < n; ++j)
        {
            if (vis[j]) continue;
            if (cur == -1 || dist[j] < dist[cur])
            {
                cur = j;
            }
        }

        vis[cur] = true;
        for(int j = 0; j < n; ++j)
        {
            path = dist[cur] + adj[cur][j];
            if (path < dist[j])
            {
                dist[j] = path;
            }
        }
    }
}
int main()
{
    int c,m,s,n,t,i,a,b,w,k=1,j;
    scanf("%d",&c);
    vector< vector<int> > adj(N);
    while(c--)
    {
        scanf("%d%d%d%d",&n,&m,&s,&t);
        for(int i = 0; i < n; ++i)
        {
            adj[i] = vector<int>(n);
            for(int j = 0; j < n; ++j)
            {
                adj[i][j] = inf;
            }
        }

        for(int i = 0; i < m; ++i)
        {
            scanf("%d%d%d",&a,&b,&w);
            adj[a][b]=w;
            adj[b][a]=w;
        }

        printf("Case #%d: ",k++);
        Dijkstra(s,adj);
        if(dist[t]!=inf)
            printf("%d\n",dist[t]);
        else printf("unreachable\n");
    }
}
