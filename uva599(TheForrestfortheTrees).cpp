#include<bits/stdc++.h>
using namespace std;
bool mark[27];
int cnt;

vector<int> graph[27], nodes;

void initializing(){
    for(int i=0; i<27; i++){
        graph[i].clear();
        mark[i] = 0;
    }
    nodes.clear();
    return;
}

void dfs(int src){
    for(int i=0; i<graph[src].size();i++){
        if(!mark[graph[src][i]]){
            mark[graph[src][i]] = 1;
            cnt++;
            dfs(graph[src][i]);
        }
    }
    return;
}

void output(){
    int tree = 0, acorn = 0;
    for(int i=0;i<nodes.size();i++){
        if(!mark[nodes[i]]){
            mark[nodes[i]] = 1;
            cnt = 1;
            dfs(nodes[i]);

            if(cnt>1) tree++;
            else acorn++;
        }
    }
    printf("There are %d tree(s) and %d acorn(s).\n", tree, acorn);
}

void input(){
    int c;
    string str, connections;

    scanf("%d", &c);

    while(c--){
        initializing();
        while(1){
            cin>> connections;
            if(connections[0]=='*')break;
            graph[connections[1]-'A'].push_back(connections[3]-'A');
            graph[connections[3]-'A'].push_back(connections[1]-'A');
        }

        cin>> str;
        for(int i=0;str[i];i++){
            if(str[i]!=',')nodes.push_back(str[i]-'A');
        }

        output();
    }
}

int main()
{
    input();

    return 0;
}
