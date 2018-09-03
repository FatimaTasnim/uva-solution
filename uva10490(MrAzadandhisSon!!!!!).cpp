#include<bits/stdc++.h>
#define M 1000000
using namespace std;
vector<int> prime;
bool mark[M+2];
void siv()
{
    for(int i=2;i*i<=M;i++)
        if(!mark[i])
        for(int j=i;j*i<=M;j++)
        mark[i*j]=true;
    for(int i=2;i<=M;i++)
        if(!mark[i])
        prime.push_back(i);
}
int len;
/*int primeFactor(long long p) {
    long long n=p;
    long long sum=1,mul=1;
    bool flag=true;
    for(int i=0; i<len; i++)
    {
        long long c=prime[i];
        mul=1;
        while(n%c==0)
        {
            mul*=c;
                sum+=mul;
            n/=c;
            if(mark[n])
            sum+=n;
            printf("%lld %lld %lld\n",c,n,sum);
        }
    }
    if(sum==p)
        return 1;
    else if (n==p)
        return 0;
    else
        return -1;
}*/
int sum_of_div(long long n)
{
    long long sum=1,d,p=n,t;
    long long s=sqrt(n);
    for(int i=0;prime[i]<=s;i+=1)
    {
        t=prime[i];
        if(n%t==0){
            sum+=t;
        d=n/t;
       //cout<< d << " " << i <<endl;
        if(d!=t)
            sum+=d;
        }
    }
   // cout << sum << endl;
    if(sum==p)
        return 1;
    else if(sum==1)
        return 0;
    else return -1;
}
int main()
{
    siv();
    long long n,r;
    int temp;
    len=prime.size();
    while(scanf("%lld",&n))
    {
        if(n==0)break;
        r= pow(2,n-1)*(pow(2,n)-1);
        //cout<< r <<" "<< sqrt(r) <<endl;
        //temp=primeFactor(r);
       temp=sum_of_div(r);
        if(temp==1)
            printf("Perfect: %lld!\n",r);
        else if(temp==0)
            printf("Given number is prime. But, NO perfect number is available.\n");
            else if (temp==-1)printf("Given number is NOT prime! NO perfect number is available.\n");
    }
}
