#include<bits/stdc++.h>
using namespace std;
int dir_x[]={0,1,0,-1};
int dir_y[]={-1,0,1,0};
char dir[]={'N','E','S','W'};
int main()
{
    int n,m,s,d1,d2,m1,m2,axes,stcr,i,j,k;
    char str[101],Ins[60001];
    char arr[101][101];
    while(scanf("%d%d%d",&n,&m,&s))
    {
        if(n==0 && m==0 && s==0)
            break;
        stcr=0;axes=0;
        for(i=0;i<n;i++)
        {
            scanf("%s",str);
            for(j=0;str[j];j++){
                arr[i][j]=str[j];
                if(str[j]=='N'){
                        d1=i;d2=j;
                    axes=0;
                }
                else if(str[j]=='L'){
                        d1=i;d2=j;
                    axes=1;
                }
                else if(str[j]=='S'){
                        d1=i;d2=j;
                    axes=2;
                }
                else if(str[j]=='O')
                {
                    d1=i;d2=j;
                    axes=3;
                }
            }
        }
            scanf("%s",Ins);
            for(k=0;k<s;k++){
            if(Ins[k]=='D' && axes<3){
                axes++;
            }
            else if(Ins[k]=='D' && axes==3)
                axes=0;
             if(Ins[k]=='E' && axes>0){
                axes--;
                }
            else if(Ins[k]=='E' && axes==0)
                axes=3;
            else if(Ins[k]=='F')
            {
                m1=d1+dir_y[axes];
                m2=d2+dir_x[axes];
                if(arr[m1][m2]!='#'&& m1<n && m1>=0 && m2>=0 && m2<m)
                {
                    if(arr[m1][m2]=='*'){
                            arr[m1][m2]='.';
                        stcr++;
                    }
                    d1=m1;d2=m2;
                }
            }
            }
        printf("%d\n",stcr);
            }

}
