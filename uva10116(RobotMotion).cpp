#include<bits/stdc++.h>
using namespace std;
int dir_x[]= {0,0,1,-1};
int dir_y[]= {-1,1,0,0};
int main()
{
    int n,l,p,i,j,f,cnt,flag;
    char arr[1001][1001];
    char str[1001];
    int mark[101][101];
    while(scanf("%d%d%d",&n,&l,&p))
    {
        if(n==l && l==p && p==0)
            break;
        cnt=0;
        flag=false;
        for(i=0; i<n; i++)
        {
            scanf("%s",str);
            for(j=0; j<l; j++)
                arr[i][j]= str[j];
        }
        p--;
        f=0;
        memset(mark,-1,sizeof(mark));
        mark[f][p]=0;
        while(true)
        {
            // cout << "ok";
            cnt++;
            //cout << cnt << endl;
            if(arr[f][p]=='W')p--;
            else if(arr[f][p]=='E')p++;
            else if(arr[f][p]=='S')f++;
            else f--;
            //cout << arr[f][p];
            if(f<0 || f>=n || p<0 || p>=l)
                break;
            if(mark[f][p]!=-1)
            {
                flag= true;
                break;
            }
            else mark[f][p]=cnt;
        }
        if(!flag)
        {
            printf("%d step(s) to exit\n",cnt);
        }
        else
        {
            printf("%d step(s) before a loop of %d step(s)\n",mark[f][p],cnt-mark[f][p]);
        }
    }
}
