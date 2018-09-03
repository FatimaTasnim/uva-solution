#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,i;
    ll sum[100010],f[100010];
    f[0]=0;f[1]=1;sum[0]=1;
    for(i=2; i<=100002; i++)f[i]=f[i-1]+f[i-2];
    for(i=1; i<=100001; i++)sum[i]=sum[i-1]+f[i+1];
    while(scanf("%lld",&n)==1 && n>=0){
        printf("%lld %lld\n",sum[n]-f[n+1],sum[n]);
    }
}
