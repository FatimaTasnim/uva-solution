#include<bits/stdc++.h>
using namespace std;
vector <int> graph[105];
int cost[105];
queue<int> q;
void bfs(int src,int real){
    q.push(src);
    while(!q.empty()){
        src=q.front();
        q.pop();
        for(int i=0;i<graph[src].size();i++){
            if(graph[src][i]!=real){
                if(cost[src]+1>cost[graph[src][i]]){
                    q.push(graph[src][i]);
                    cost[graph[src][i]]=cost[src]+1;
                }
            }
        }
    }
}
int main()
{
    int nodes, source, a, b, i, maxima, destination, k=0;
    bool flag=0;
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    while(1){
        scanf("%d",&nodes);
        if(!nodes)break;
        maxima=0;
        for(i=0;i<=nodes;i++)graph[i].clear(),cost[i]=0;
        scanf("%d",&source);
        cost[source]=0;
        while(1){
            scanf("%d%d",&a,&b);
            if(!a && !b)break;
            graph[a].push_back(b);
        }
        bfs(source,source);
        for(i=1;i<=nodes;i++){
           if(cost[i]>maxima){
                maxima= cost[i];
                destination= i;
           }
        }
        printf("Case %d: The longest path from %d has length %d, finishing at %d.\n\n",++k,source,maxima,destination);
    }
}
/// Accepted :)
