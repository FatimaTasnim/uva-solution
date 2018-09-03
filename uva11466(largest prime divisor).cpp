/*
   Problem Name: 11466 - Largest Prime Divisor
       Platform: Uva
     Algorithom: Number theory/ Prime
   Coder's Name: Fatima Tasnim

~~~ HaPpY hApPy HaPpY HaPpY hApPy HaPpY HaPpY hApPy HaPpY HaPpY hApPy HaPpY HaPpY hApPy HaPpY HaPpY hApPy HaPpY ~~~

*/

#include<bits/stdc++.h>

#define pi 2*acos(0.0)
#define PS system("pause")
#define siter(n,T1)  for(set<T1>::iterator it=n.begin();it!=n.end();it++)
#define miter(n,T1,T2)  for(map<T1,T2>::iterator it=n.begin();it!=n.end();it++)
#define FOR(s,e,inc) for(int i=s;i<=e;i+=inc)
#define loop(i,a,b) for(int i=a;i<b;i++)
#define S1for(n) for(int i=1;i<=n;i++)
#define Sfor(n) for(int i=0;i<n;i++)
#define inf (1<<30)
#define pb push_back
#define ppb pop_back
#define F first
#define S second
#define sz(x) ((int)x.size())
#define eps 1e-9
#define gcd(x,y) __gcd(x,y)
#define lcm(a,b) (a*(b/gcd(a,b)))
#define on(x,w)  x=x|(1<<w)
#define check(x,w) (x&(1<<w))==(1<<w)?true:false
#define all(x) (x).begin(),(x).end()
#define s(n) scanf("%d",&n)
#define sl(n) scanf("%lld",&n)
#define pf printf
#define ll long long int
#define MOD 1000000007
#define sqr(x) (( (x)* (x))%MOD)
#define cube(x)   ( (sqr(x)*(x))%MOD)
#define bit_cnt(x)   __builtin_popcount(x)
#define INT(c)  ((int)((c) - '0'))
#define CHAR(i) ((char)(i + int('0')))
#define maxall(v) *max_element(all(v))
#define minall(v) *min_element(all(v))
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
#define btz(a)   __builtin_ctz(a)
#define Mems(p,n) memset(p, n, sizeof(p))
#define makeint(n,s)  istringstream(s)>>n
#define BOUNDARY(i,j,Row,Col) ((i >= 0 && i < Row) && (j >= 0 && j < Col))
#define M 1000000
using namespace std;
typedef vector<int> vi;
typedef vector<long long> vl;

template<class T>
inline bool fs(T &x)
{
    int c=getchar();
    int sgn=1;
    while(~c&&c<'0'||c>'9')
    {
        if(c=='-')sgn=-1;
        c=getchar();
    }
    for(x=0; ~c&&'0'<=c&&c<='9'; c=getchar())
        x=x*10+c-'0';
    x*=sgn;
    return ~c;
}
bool mark[M+2];
vi prime;
void siv()
{
    for(int i=2;i*i<=M;i++)
        if(!mark[i])
        for(int j=i;j*i<=M;j++)
        mark[i*j]=true;
    for(int i=2;i<=M;i++)
        if(!mark[i])
        prime.pb(i);
}
int len;
vl temp;
ll primeFactor(ll n) {
    for(int i=0; i<len; i++)
    {bool flag=true;
        while(n%prime[i]==0)
        {
            if(flag){
                temp.push_back(prime[i]);
                }
            flag=false;
            n/=prime[i];
        }
    }
    if(n>1)
    {
        temp.push_back(n);
    }
    int l=temp.size();
    if(l>1)return temp[l-1];
    else return -1;
}
int main()
{
    siv();
    ll n;
    len=prime.size();
    while(fs(n)==1&&n!=0)
    {
         if (n < 0)
            n *= -1;
            cout<< primeFactor(n) <<endl;
temp.erase(temp.begin(),temp.end());
    }
return 0;
}
//it's accepted :)
