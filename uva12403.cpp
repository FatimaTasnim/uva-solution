#include<bits/stdc++.h>
using namespace std;

#define s(n) scanf("%d",&n)
#define sfor(n) for(int i=1; i<=n; i++)
#define aforb(a,b) for(int i=a; i<=b; i++)
#define pf printf
#define ll long long
#define ull unsigned ll
#define MOD 1000000007
#define pub push_back
#define pob pop_back
#define mem(a,v) memset(a,v,sizeof(a))
#define gcd(x,y) __gcd(x,y)
#define lcm(a,b) (a*(b/gcd(a,b)))
#define multimod2(a,b) ((a%MOD)*(b%MOD))%MOD
#define multimod3(a,b,c) ((a%MOD)*(b%MOD)*(c%MOD))%MOD

#define s2(n,m) scanf("d",&n,&m)

int main()
{
    char a[100];
    long int n,k=0,sum,w,i;
    scanf("%ld",&n);
    getchar();
    while(n--)
    {
       gets(a);
       sum=0;
       if(a[0]=='r')
        printf("%ld\n",k);
    else
    {
        for(i=7;a[i];i++)
       {
         w=a[i]-48;
         //printf("w=%lld ",w);
         sum=sum*10+w;
       }
       //printf("%lld ",sum);
       k+=sum;

    }

    }
return 0;
}

