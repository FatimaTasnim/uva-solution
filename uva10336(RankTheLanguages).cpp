#include<bits/stdc++.h>
using namespace std;
int dir_x[]= {1,-1,0,0};
int dir_y[]=  {0,0,1,-1};

struct pair_
{
    int r;
    int c;
};
bool compare(pair_ a,pair_ b)
{
    if(a.c==b.c)return a.r<b.r;
    else return a.c>b.c;
}
int row,col;
int graph[1001][1001];
queue<pair_> Q;
int mark[1001][1001];

void BFS_2D(pair_ ship,int value)
{
    //memset(mark,0,sizeof mark);
    pair_ temp,tsrc;
    int tx,ty,i,flag=true;
    Q.push(ship);
    mark[ship.r][ship.c]=1;
    while(!Q.empty())
    {
        tsrc=Q.front();
        Q.pop();
        for(i=0; i<4; i++)
        {
            tx=tsrc.r+dir_x[i];
            ty=tsrc.c+dir_y[i];
            if((tx>=0 && tx<row) && (ty>=0 && ty<col) && graph[tx][ty]== value && mark[tx][ty]==0)
            {
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
    int i,j,n,k=1;
    int cnt[27],mk[27];
    char str[1001];
    vector<pair_> vc;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d%d",&row,&col);
        //getchar();
        memset(mark,0,sizeof mark);
        memset(graph,0,sizeof graph);
        memset(cnt,0,sizeof cnt);
        //memset(mk,0,sizeof mk);
        vc.clear();
        //if(row==0&&col==0)break;
        for(i=0;i<row;i++)
        {
            scanf("%s",str);
            for(j=0;str[j];j++)
            {
                    graph[i][j]=str[j]-'a';
            }
        }
        for(i=0;i<row;i++)
        {
            for(j=0;j<col;j++){
                //cout<< graph[i][j] ;
            if(mark[i][j]==0){
                    temp.r=i,temp.c=j;
                BFS_2D(temp,graph[i][j]);
                cnt[graph[i][j]]++;
            }
            }
            //cout<< endl;
        }
        printf("World #%d\n",k++);
        for(i=0;i<27;i++){
                if(cnt[i]>0){
                temp.r=i,temp.c=cnt[i];
                vc.push_back(temp);
                }
        }
        sort(vc.begin(),vc.end(),compare);
        for(i=0;i<vc.size();i++)
        {
            printf("%c: %d\n",vc[i].r+'a',vc[i].c);
        }
    }
    return 0;
}
