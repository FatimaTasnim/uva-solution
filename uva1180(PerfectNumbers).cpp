#include<bits/stdc++.h>
#define M 1000000
using namespace std;
bool mark[M+2];
vector <long long> prime;
void siv()
{
    for(int i=2; i*i<=M; i++)
        if(!mark[i])
            for(int j=i; j*i<=M; j++)
                mark[i*j]=true;
    for(int i=2; i<=M; i++)
        if(!mark[i])
            prime.push_back(i);
}
long long countDivisor(long long n)
{
    long long divisor = 1,sum=0,prev=1;
    for (int i = 0; prime[i]*prime[i]<=n; i++)
    {
        if (n % prime[i] == 0)
        {
            while (n % prime[i] == 0)
            {
                prev*=prime[i];
                n /= prime[i];
                if(prev!=n)
                    sum+=(n+prev);
            }
        }
    }
    return sum+1;
}
int main()
{
    int n,tc;
    long long r;
    siv();
    //freopen("tasnim.txt","r",stdin);
    scanf("%d",&tc);

    while(tc--)
    {
        scanf("%d",&n);
        getchar();
        if(n==1)
            printf("No\n");
        else
        {
            r=pow(2,(n-1))*(pow(2,n)-1);
            //cout << r << " " << countDivisor(r) << endl ;
            if(countDivisor(r)==r)
                printf("Yes\n");
            else printf("No\n");
        }
    }

}
