#include<bits/stdc++.h>

#define pi          2*acos(0.0)
#define PS          system("pause")
#define S1for(n)    for(int i=1;i<=n;i++)
#define Sfor(n)     for(int i=0;i<n;i++)
#define inf         (1<<30)
#define pb          push_back
#define ppb         pop_back
#define F           first
#define S           second
#define sz(x)       ((int)x.size())
#define eps         1e-9
#define gcd(x,y)    __gcd(x,y)
#define lcm(a,b)    (a*(b/gcd(a,b)))
#define on(x,w)     x=x|(1<<w)
#define check(x,w)  (x&(1<<w))==(1<<w)?true:false
#define all(x)      (x).begin(),(x).end()
#define s(n)        scanf("%c",&n)
#define ss(n)       scanf("%s",n)
#define pf          printf
#define ll          long long int
#define MOD         1000000007
#define sqr(x)      (( (x)* (x))%MOD)
#define cube(x)     ( (sqr(x)*(x))%MOD)
#define bit_cnt(x)   __builtin_popcount(x)
#define INT(c)       ((int)((c) - '0'))
#define maxall(v)   *max_element(all(v))
#define minall(v)   *min_element(all(v))
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
#define btz(a)      __builtin_ctz(a)
#define Mems(p,n)   memset(p, n, sizeof(p))
#define what_is(x)  cerr<<#x<<" is "<<x<<"\n";
#define M           1000000

#define makeint(n,s)            istringstream(s)>>n
#define BOUNDARY(i,j,Row,Col)   ((i >= 0 && i < Row) && (j >= 0 && j < Col))

using namespace std;


set<int> st1;
set<int> :: iterator bit;
map<int,int> mp1;
map<int,int>mp2;

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
int main()
{
    int n,a,b,first,second,temp1,temp2,sum,temp;
    fs(n);
    while(n--)
    {
        sum=0;
        fs(a);
        fs(b);
        Sfor(a)
        {
            fs(first);
            st1.insert(first);
            mp1[first]++;
        }
        S1for(b)
        {
            fs(second);
            st1.insert(second);
            mp2[second]++;
        }
        //it=st1.begin();
        bit=st1.begin();
        Sfor(st1.size())
        {
            temp1=mp1[*bit];
            temp2=mp2[*bit];
            temp=temp1-temp2;
            if(temp<0)
                temp*=-1;
            sum+=temp;
            // printf("%d\n",*bit);
            //st2.pop_back();
            bit++;
        }

        printf("%d\n",sum);
        mp1.clear();
        mp2.clear();
        st1.clear();
    }
}
