#include<bits/stdc++.h>
using namespace std;
int main()
{
    int c,k=0,cnt,n,i,j;
    char str[1001];
    scanf("%d",&c);
    while(c--){
            cnt=0;
        scanf("%d",&n);
        for(i=0;i<n;i++){
            scanf("%s",str);
            for(j=0;str[j];j++)
                if(str[j]=='x')
                cnt++;
        }
        k++;
        printf("Case %d: %d\n",k,cnt);
    }
}
