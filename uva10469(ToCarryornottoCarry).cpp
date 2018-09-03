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

template<class T>
inline T mod_v(T num)
{
    if(num>=0)
        return num%MOD;
    else
        return (num%MOD+MOD)%MOD;
}

template<class T>
T fast_pow(T n , T p)
{
    if(p==0) return 1;
    if(p%2)
    {
        T g=mod_v ( mod_v(n) * mod_v(fast_pow(n,p-1)) );
        return g;
    }
    else
    {
        T g=fast_pow(n,p/2);
        g=mod_v( mod_v(g) * mod_v(g) ) ;
        return g;
    }
}
int gcd(int a,int b)
{
    while(b)
        b^=a^=b^=a%=b;
    return a;
}

template<class T>
inline T modInverse(T n)
{
    return fast_pow(n,MOD-2);
}

template<class T>
inline void debug(string S1,T S2,string S3)
{
    cout<<S1<<S2<<S3;
}
/***********Code Starts From Here*********/
queue <int> st,st1;
void decimal_binary(int n,int tag)
{
    while (n!=0)
    {
        if(tag==0)
        st.push(n%2);
        else
            st1.push(n%2);
        n/=2;
    }
}
queue <int> sr;
void binary_fault()
{
    int l1,l2,maxima,temp1,temp2;
    l1=st.size();l2=st1.size();
    if(l1>l2)
        maxima=l1;
    else
        maxima=l2;
    for(int i=0;i<maxima;i++)
    {
        if(!st.empty()){
           temp1=st.front();
           st.pop();
        }
        else
            temp1=0;
        if(!st1.empty()){
           temp2=st1.front();
           st1.pop();
        }
        else
            temp2=0;
            if(temp1==temp2==1)
                sr.push(0);
            else
                sr.push(temp1+temp2);
    }
}
int decimal()
{
    int deci=0,i=0;
    while(!sr.empty())
    {
        deci+=sr.front()*pow(2,i);
        sr.pop();
        i++;
    }
    return deci;
}

int main()
{
    int a,b;
    while(scanf("%d %d",&a,&b)==2)
    {
        decimal_binary(a,0);
        decimal_binary(b,1);
        binary_fault();
        printf("%d\n",decimal());
    }
}
