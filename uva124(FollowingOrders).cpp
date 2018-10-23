#include<bits/stdc++.h>
using namespace std;

bool mark[27];
int res[27], track[27];
bool parent[27][27];
vector<int>graph[27];
vector<char>nodes;

void DFS(int src){
    for(int i=0;i<graph[src].size();i++){
        parent[graph[src][i]][src]= 1;
        cerr << nodes[graph[src][i]] << " rec " << nodes[src] << endl;
        if(!mark[graph[src][i]]){
            mark[graph[src][i]] = 1;
            DFS(graph[src][i]);
        }
    }
}

void Print(int pos, int n){
    if(pos==n){
        for(int i=0; i<pos;i++){
            printf("%c", nodes[res[i]]);
        }
        printf("\n");
        return;
    }

    for(int i=pos;i<n;i++){
        bool flag = true;
        for(int j=0;j<=n;j++){
            if(parent[i][j]==1 && !mark[j]){
                flag = false;
                break;
            }
        }
        res[pos]= i;
        mark[i] = 1;
        if(flag)Print(pos+1, n);
    }

}
int main()
{
    int n, m, a, b;
    bool flag;
    string str,node;

    while(getline(cin,node)){
        int cnt=0;
        for(int i=0;node[i];i++){
            if(node[i]!=' '){
                nodes.push_back(node[i]);
                track[node[i]-'a'] = cnt;
                cnt++;
            }
        }
        n = nodes.size();
        getline(cin, str);
        m = str.size();
        for(int i=0;i+2<m;i+=4){
            cerr << str[i] << " " << str[i+2] << " " << track[str[i]-'a'] << " " << track[str[i+2]-'a'] << endl;
            graph[track[str[i]-'a']].push_back(track[str[i+2]-'a']);
        }
        cout << "o Hai\n";

        memset(parent, false, sizeof parent);
        memset(mark, false, sizeof mark);
        for(int i=0;i<n;i++){
            if(!mark[i]){
                mark[i] = 1;
                DFS(i);
            }
        }

        for(int i = 0; i<n; i++){
            cerr << nodes[i] << " child: " ;
                for(int j=0;j<n;j++){
                    cerr << i << " " << j << " " << parent[i][j] << endl;
                    if(parent[i][j])printf("%c ", node[j]);
                }
                cerr << endl;
        }
        Print(0, n);
        printf("\n");
    }
}
