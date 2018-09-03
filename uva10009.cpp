#include<bits/stdc++.h>
using namespace std;
int graph[27][27],cost[27],clr[101],parent[27];
queue<int> Q;
void BFS(int starting_vertex,int ending_vertex)
{
    int tsrc;
    char c;
    Q.push(starting_vertex);
cost[starting_vertex]=0;

while(!Q.empty()){

        tsrc=Q.front();
        c=tsrc+65;
        cout << c ;
        //printf("%d (%d)\n",tsrc,cost[tsrc]);
        for(int i=1;i<=26;i++){
            if(graph[tsrc][i]==1){
                if(clr[i]==0){
                    Q.push(i);
                    clr[i]=1;
                    cost[i]=cost[tsrc]+1;
                    //parent[i]=tsrc;
                }
            }
        }
        if(tsrc==ending_vertex){
                cout << endl;
            break;
        }
        Q.pop();
        clr[tsrc]=2;
}
}
int main()
{
    int M,N,i,c,check;
    string str1,str2;
    scanf("%d",&c);
    while(c--){
        printf("\n");
        scanf("%d%d",&M,&N);
        for(i=0;i<M;i++){
            cin >> str1 >> str2 ;
            graph[str1[0]-65][str2[0]-65]=1;
            graph[str2[0]-65][str1[0]-65]=1;
        }
        //BFS(18,30);
        for(i=0;i<N;i++){
            cin >> str1 >> str2;
            BFS(str1[0]-65,str2[0]-65);

        }
    }
}
