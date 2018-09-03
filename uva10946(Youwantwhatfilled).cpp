
#include<bits/stdc++.h>
using namespace std;
int dir_x[]= {+1,-1,+0,+0};
int dir_y[]= {+0,+0,+1,-1};

struct pair_
{
    int r;
    int c;
};
int row,col,cn;
int graph[101][101];
queue <pair_> Q;
int mark[101][101];
void BFS_2D(pair_ mine,int catch_)
{
    pair_ temp,tsrc;
    int tx,ty,i,flag=true;
    Q.push(mine);
    mark[mine.r][mine.c]=1;
    while(!Q.empty())
    {
        tsrc=Q.front();
        Q.pop();
        for(i=0; i<4; i++)
        {
            tx=tsrc.r+dir_x[i];
            ty=tsrc.c+dir_y[i];
            if((tx>=0 && tx<row) && (ty>=0 && ty<col) && graph[tx][ty]==catch_ && mark[tx][ty]==0)
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
    pair_ co;
    int i,j;
    char str[101];
    while(scanf("%d%d",&row,&col)==2){
        cn=0;
        memset(mark,0,sizeof mark);
        for(i=0;i<row;i++){
            scanf("%s",str);
            for(j=0;str[j];j++){
                if(str[j]>='a' && str[j]<='z'){
                    graph[i][j]= str[j]-'A';
                    co.r=i,co.c=j;
                    keeper.push_back(co);
                }
                else graph[i][j]=-1;
            }
            for(i=0;)
        }
    }
}
