#include<bits/stdc++.h>
using namespace std;

bool mark[105];
vector<int>graph[105];
stack<int> OrderedTasks;

void DFS(int src){
    for(int i=0;i<graph[src].size();i++){
        if(!mark[graph[src][i]]){
            mark[graph[src][i]] = 1;
            DFS(graph[src][i]);
        }
    }
    OrderedTasks.push(src);
}

int main()
{
    int n, m, a, b;
    bool flag;

    while(true){
        scanf("%d%d", &n, &m);
        if(!(n+m))break;

        for(int i=0;i<m;i++){
            scanf("%d%d", &a, &b);
            graph[a].push_back(b);
        }

        memset(mark, false, sizeof mark);
        for(int i=1;i<=n;i++){
            if(!mark[i]){
                mark[i] = 1;
                DFS(i);
            }
        }

        flag = false;
        while(!OrderedTasks.empty()){
            if(flag)printf(" ");
            flag = 1;
            printf("%d", OrderedTasks.top());
            OrderedTasks.pop();
        }
        printf("\n");
    }
}
