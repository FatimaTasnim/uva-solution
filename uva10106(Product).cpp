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
// ******************************************************************************************
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
//*******************************************************************************************
template<class T>
inline T mod_v(T num)
{
    if(num>=0)
        return num%MOD;
    else
        return (num%MOD+MOD)%MOD;
}
// *******************************************************************************************

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
//******************************************************************************************
int gcd(int a,int b)
{
    while(b)
        b^=a^=b^=a%=b;
    return a;
}
// *******************************************************************************************

template<class T>
inline T modInverse(T n)
{
    return fast_pow(n,MOD-2);
}
//*********************************************************************************************
template<class T>
inline void debug(string S1,T S2,string S3)
{
    cout<<S1<<S2<<S3;
}

// *************************************************************************************************

bool equalTo ( double a, double b ){ if ( fabs ( a - b ) <= eps ) return true; else return false; }
bool notEqual ( double a, double b ){if ( fabs ( a - b ) > eps ) return true; else return false; }
bool lessThan ( double a, double b ){ if ( a + eps < b ) return true; else return false; }
bool lessThanEqual ( double a, double b ){if ( a < b + eps ) return true;   else return false;}
bool greaterThan ( double a, double b ){if ( a > b + eps ) return true;else return false;}
bool greaterThanEqual ( double a, double b ){if ( a + eps > b ) return true;else return false;}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
/**************************************Code Starts From Here******************************************/
stack <int> str[1000],sr;
int main()
{
    char nut[100000],boltu[100000],temp_n[100000],temp_b[100000];
    int len1,len2,mx,mn;
    while(ss(nut)==1 && ss(boltu)==1)
    {
        queue <int> str[10000];stack <int> sr;
        len1=strlen(nut);
        len2=strlen(boltu);
        if(len1>len2)
        {
            mx=len1;mn=len2;
            strcpy(temp_n,nut);
            strcpy(temp_b,boltu);
        }
        else
        {
            mx=len2;mn=len1;
            strcpy(temp_n,boltu);
            strcpy(temp_b,nut);
        }int hand,t,k=0;
        for(int i=mn-1;i>=0;i--)
        {hand=0;
            for(int j=mx-1;j>=0;j--)
            {
                t=(temp_n[j]-48)*(temp_b[i]-48)+hand;
                if(t!=0){
                str[k].push(t%10);
                hand=t/10;
                }
                else
                {
                    hand=0;
                    str[k].push(0);
                }
            }if(hand>0)
            str[k].push(hand);
            k++;
            for(int f=0;f<k;f++)
                str[k].push(0);
        }
int maxima=0,len;
        for(int i=0;i<k;i++)
        {
            len=str[i].size();
            if(len>maxima)
                maxima=len;
        }
        int sum,hand1;
    for(int m=0;m<maxima;m++)
    {
        sum=hand1;
        for(int l=0;l<k;l++){
        if(!str[l].empty()){
            sum+=str[l].front();
            str[l].pop();
        }
        }
        sr.push(sum%10);//cout<<sr.top()<<" ";
            if(sum!=0)
            hand1=sum/10;
            else
                hand1=0;
    }
    if(hand1!=0)
        {
            while(hand1!=0)
                {
                    sr.push(hand1%10);
                    hand1=hand1/10;
                }
        }
        int g=0;
        int length;length=sr.size();
        int zero=0;
    while(!sr.empty())
        {
            if(sr.top()==0)
                zero++;
            if(g==0 && sr.top()!=0)
                g=1;

            if(g==1)
                cout << sr.top();
            sr.pop();
        }
if(zero==length)
    cout<<"0";
    cout << endl;
    }
}
