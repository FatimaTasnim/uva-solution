#include<bits/stdc++.h>
#define cover(a,d) memset(a,d,sizeof(a))
#define st(s) s.size();
using namespace std;
bool prime[10000010];
void is_prime()
{
    prime[1]=false;
        int n=sqrt(10000000);
        for(int i=2;i<=n;i++)
        {
            if(prime[i]!=false)
            {
                for(int j=2*i;j<=10000000;j=j+i)
                {
                    prime[j]=false;
                }
            }
        }
}
int main()
{

    cover(prime,true);
    is_prime();
    string s;
    while(getline(cin,s))
    {
        if(s.compare("0")==0)
            break;

        int l=st(s);
        long long p;
        long long Max=0;
        for(int i=0;i<l;i++)
        {
            for(int j=l;j>=i;j--)
            {
                istringstream buf(s.substr(i,j)); //string to integer;
                buf >> p;
                if(p > 100000)
                 continue;
                if(prime[p])
                {
                    if(Max < p)
                    Max=p;
                }
            }
        }
        cout<<Max<<endl;

    }

    return 0;
}
