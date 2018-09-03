#include<bits/stdc++.h>
using namespace std;
int dir_x[]= {1,-1,0,0,-1,1,-1,1};
int dir_y[]= {0,0,1,-1,-1,-1,1,1};

struct pair_
{
    int r;
    int c;
};
int row,col,ct;
int graph[151][151];
queue<pair_> Q;
int mark[151][151];
bool BFS_2D(pair_ mine)
{
    pair_ temp,tsrc;
    int tx,ty,i,flag=true;
    Q.push(mine);
   // cout<< mine.r << " " << mine.c << endl;
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
                //cout << tx << " " << ty << " ";
                mark[tx][ty]=1;
                temp.r=tx;
                temp.c=ty;
                Q.push(temp);
                ct++;
            }
        }
    }
    //cout<< endl;
}
int main()
{
   pair_ temp;
   int maxima,n,i,j,f=0;
   char str[151];
   vector<pair_>vc;
   scanf("%d",&n);
   getchar();
   getchar();
   while(n--)
   {
       j=maxima=0;
       memset(graph,0,sizeof graph);
       memset(mark,0,sizeof mark);
       vc.clear();
       while(gets(str) && strlen(str)>0)
       {
           for(i=0;str[i];i++)
           {
               if(str[i]=='1'){
                graph[j][i]=1;
               temp.r=j,temp.c=i;
               vc.push_back(temp);
               }
           }
           j++;
       }
       row=col=j;
       for(i=0;i<vc.size();i++)
       {
           ct=1;
           if(mark[vc[i].r][vc[i].c]==0){
            BFS_2D(vc[i]);
           if(ct>maxima)maxima=ct;
           }
       }
       if(f==1)printf("\n");
       f=1;
       printf("%d\n",maxima);
   }
}
