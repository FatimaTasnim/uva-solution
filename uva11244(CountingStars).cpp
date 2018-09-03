#include<bits/stdc++.h>
using namespace std;
int dir_x[]= {1,-1,0,0,-1,1,-1,1};
int dir_y[]= {0,0,1,-1,-1,-1,1,1};

struct pair_
{
    int r;
    int c;
};
int row,col,cn;
int graph[101][101];
queue<pair_> Q;
int mark[101][101];
void BFS_2D(pair_ mine)
{
    pair_ temp,tsrc;
    int tx,ty,i,flag=true;
    Q.push(mine);
    mark[mine.r][mine.c]=1;
    while(!Q.empty())
    {
        tsrc=Q.front();
        Q.pop();
        for(i=0; i<8; i++)
        {
            tx=tsrc.r+dir_x[i];
            ty=tsrc.c+dir_y[i];
            if((tx>=0 && tx<row) && (ty>=0 && ty<col) && graph[tx][ty]!=0 && mark[tx][ty]==0)
            {
                cn++;
                mark[tx][ty]=1;
                temp.r=tx;
                temp.c=ty;
                Q.push(temp);
            }
        }
    }
}
int main()
{
    pair_ temp;
    int i,j,cnt;
    char str[101];
    vector<pair_> vc;
    while(scanf("%d%d",&row,&col))
    {
        memset(mark,0,sizeof mark);
        memset(graph,0,sizeof graph);
        vc.clear();
        cnt=0;
        if(row==0&&col==0)break;
        for(i=0;i<row;i++)
        {
            scanf("%s",str);
            for(j=0;str[j];j++)
            {
                if(str[j]=='*'){
                    graph[i][j]=1;
                    temp.r=i,temp.c=j;
                    vc.push_back(temp);
                }
            }
        }
        for(i=0;i<vc.size();i++)
        {
            cn=0;
            if(mark[vc[i].r][vc[i].c]==0){
                BFS_2D(vc[i]);
                if(cn==0)
                cnt++;
            }
        }
        printf("%d\n",cnt);
    }
    return 0;
}
