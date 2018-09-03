#include<bits/stdc++.h>
using namespace std;
int cnt;
bool mark[10000];
vector< vector <int> >graph;
void DFS(int src)
{
    int i;
    mark[src]=true;
    for(i=0;i<graph[src].size();i++)
    {
        if(!mark[graph[src][i]])
        {
            mark[graph[src][i]]=true;
            cnt++;
            DFS(graph[src][i]);
        }
    }
}
int main()
{
    int c,n,m,l,a,b,i,j,src,total;
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    scanf("%d",&c);
    while(c--)
    {
        total=0;
//        graph.clear();
        memset(mark,0,sizeof mark);
        scanf("%d%d%d",&n,&m,&l);
        graph.assign(n+1, vector<int>());
        //for(i=0;i<=n;i++)graph[i].clear();
        for(i=0;i<m;i++){
            scanf("%d%d",&a,&b);
            graph[a].push_back(b);
            //mark[a]=mark[b]=false;
        }
        for(i=0;i<l;i++)
        {
            scanf("%d",&src);
            if(!mark[src]){
            cnt=1;
            DFS(src);
            total+=cnt;
            }
        }
        printf("%d\n",total);
    }
}
