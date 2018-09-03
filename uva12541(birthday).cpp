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
struct birthday {
    char name[50];
    int years;
    int month;
    int day;
};
bool compare( birthday a, birthday b ) {
    if(a.years==b.years){
    if( a.month == b.month ) {
        if( a.day == b.day ) {
              return strlen( a.name ) < strlen( b.name );
        }else return a.day > b.day;
    }else return a.month > b.month;
    }else return a.years > b.years;

}

int main()
{
    vector<birthday> students;
    int n,i;
    fs(n);
    for(i=0;i<n;i++)
    {
        students.pb(birthday());
        cin>>students[i].name;
        /*scanf("%s",students[i].name);
        scanf("%d",students[i].day);
        scanf("%d",students[i].month);
        scanf("%d",students[i].years);*/
        cin>>students[i].day;
        cin>>students[i].month;
        cin>>students[i].years;

    }
    sort(students.begin(),students.end(),compare);

    pf("%s\n",students[0].name);
    pf("%s\n",students[students.size()-1].name);
}
