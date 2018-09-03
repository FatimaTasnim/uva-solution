#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,count_,m,n,s=1,flag=0;
    char ara[110][110];
    while(scanf("%d%d",&n,&m))
    {
        if(n==0 && m==0)break;
        if(flag==1)printf("\n");
        flag=1;
        for(i=0;i<n;i++)
            scanf("%s",ara[i]);
        for(i=0;i<n;i++)
            for(j=0;j<m;j++)
                if(ara[i][j]=='.')
                {
                    count_=0;
                    for(k=i-1;k<=i+1;k++)
                    for(l=j-1;l<=j+1;l++)
                    if(k>=0&&k<n&&l>=0&&l<m&&ara[k][l]=='*')count_++;
                    ara[i][j]=count_+'0';
                }
        printf("Field #%d:\n",s++);
        for(i=0;i<n;i++)
            printf("%s\n",ara[i]);
    }
    return 0;
}
