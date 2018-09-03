#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;
    char str[26];
    int mark[14];
    int maxima,ans;
    while(scanf("%d", &n)&&n!=0){
        gets(str);
        maxima = -10;
        for(i=0;i<n;i++){
            mark[i] = 0;
            gets(str);
            for(j=0;j<25;j++)if(str[j]=='X')mark[i]++,maxima = max(maxima, mark[i]);
        }
        ans = 0;
        for(i=0;i<n;i++)ans += (maxima - mark[i]);
        printf("%d\n", ans);
    }
}
