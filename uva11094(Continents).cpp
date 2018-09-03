#include<bits/stdc++.h>

#define pi          2*acos(0.0)
#define PS          system("pause")
#define inf         (1<<30)
#define pb          push_back
#define ppb         pop_back
#define F           first
#define S           second
#define sz(x)       ((int)x.size())
#define eps         1e-9
#define on(x,w)     x=x|(1<<w)
#define check(x,w)  (x&(1<<w))==(1<<w)?true:false
#define all(x)      (x).begin(),(x).end()
#define s(Z)        scanf("%c",&Z)
#define ss(Z)       scanf("%s",Z)
#define s1(Z)       scanf("%d",&Z)
#define s2(Z,W)     scanf("%d%d",&Z,&W)
#define pf          printf
#define chocolate(Z) for(int i=0;i<Z;i++)
#define icecream(Z) for(int i=1;i<=Z;i++)
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

bool equalTo ( double a, double b ){ if ( fabs ( a - b ) <= eps ) return true; else return false; }
bool notEqual ( double a, double b ){if ( fabs ( a - b ) > eps ) return true; else return false; }
bool lessThan ( double a, double b ){ if ( a + eps < b ) return true; else return false; }
bool lessThanEqual ( double a, double b ){if ( a < b + eps ) return true;   else return false;}
bool greaterThan ( double a, double b ){if ( a > b + eps ) return true;else return false;}
bool greaterThanEqual ( double a, double b ){if ( a + eps > b ) return true;else return false;
///**************************************Code Starts From Here******************************************/
int dir_x[]= {+1,-1,+0,+0};
int dir_y[]= {+0,+0,+1,-1};

struct pair_
{
    int r;
    int c;
};
int row,col,cn;
int graph[101][101];
queue <pair_> Q;
int mark[101][101];
void BFS_2D(pair_ mine)
{
    pair_ temp,tsrc;
    int tx,ty,i,flag=true;
    Q.push(mine);
    mark[mine.r][mine.c]=1;
    while(!Q.empty())
    {
        tsrc=Q.front();
        Q.pop();
        for(i=0; i<4; i++)
        {
            tx=tsrc.r+dir_x[i];
            ty=tsrc.c+dir_y[i];
            if((tx>=0 && tx<row) && (ty>=0 && ty<col) && graph[tx][ty]!=0 && mark[tx][ty]==0)
            {
                cn++;
                mark[tx][ty]=1;
                temp.r=tx;
                temp.c=ty;
                Q.push(temp);
            }
        }
    }
}
int main()
{
    int m,n;
    while(s2(m,n)==2){
        mems(mark,0);
        chocolate(m){
            ss(str);
            for(j=0;str[j];j++){
                if(str[j]=='l')graph[i][j]=1;
                else graph[i][j]=0;
            }
        }
        s2(co.r,co.c);
        BFS_2D(co);
    }
}
