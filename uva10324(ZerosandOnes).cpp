#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,a,b,q,sum,minima,maxima,r=1,j;
    char str[1000001];
    while(scanf("%s",str)==1){
            sum=0;
        if(strlen(str)==0)break;
        scanf("%d",&q);
        if(q>0)
            printf("Case %d:\n",r++);
        for(i=0;i<q;i++){
            scanf("%d%d",&a,&b);
            if(a>b)minima=b,maxima=a;
            else minima=a,maxima=b;
                for(j=minima;j<maxima;j++)
                    if(str[j]!=str[j+1]){
                printf("No\n");
                break;
                    }
            if(j==maxima) printf("Yes\n");
        }
    }
}
