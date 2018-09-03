#include<bits/stdc++.h>
using namespace std;
bool node[105];
int mark[103][103];
vector <int> pages;

int main()
{
        int a,b,sz,sum,i,j,k,l=0,x,c,ps;
        double avg;
        while(scanf("%d%d",&a,&b)){
                if(!a & !b)break;
                memset(mark,-1,sizeof mark);
                memset(node,0,sizeof node);
                pages.clear();
                sum=0;
                while(1){
                        mark[a][b]=1;
                        if(!node[a]){
                                node[a]=1;
                                pages.push_back(a);
                                mark[a][a]=0;
                        }
                         if(!node[b]){
                                node[b]=1;
                                pages.push_back(b);
                                mark[b][b]=0;
                        }
                        scanf("%d%d",&a,&b);
                        if(!a & !b)break;
                }
                ps=pages.size();
                for(i=0;i<ps;i++){
                        a= pages[i];
                        for(j=0;j<ps;j++){
                                b= pages[j];
                                for(k=0;k<ps;k++){
                                        c= pages[k];
                                        if(mark[b][a]<0 || mark[a][c]<0)continue;
                                        x=  mark[b][a]+ mark[a][c];
                                        if(mark[b][c]>x || mark[b][c]<0)mark[b][c]=x;
                                }
                        }
                }
                sz=0;
                for(i=0;i<ps;i++){
                        for(j=0;j<ps;j++){
                                if(mark[pages[i]][pages[j]]>0){
                                              //  cout << pages[i] << " " <<pages[j] << " " << mark[pages[i]][pages[j]] <<endl;
                                                sum+= mark[pages[i]][pages[j]],sz++;
                                }
                        }
                }
                sz= ps*(ps-1);
                //cerr << sz << " "<< sum  << endl;

                avg= (sum*1.0)/(sz*1.0);
                printf("Case %d: average length between pages = %.3f clicks\n",++l,avg);
        }
}
