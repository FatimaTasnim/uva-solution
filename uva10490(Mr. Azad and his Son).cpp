#include<bits/stdc++.h>
#define M 9999999
using namespace std;
bool mark[M+2];
vector<long long> prime;
void siv()
{
   // prime.push_back(2);
    for(long long i=2;i*i<=M;i++)
        if(!mark[i])
        for(long long j=i;j*i<=M;j++)
        mark[i*j]=true;
    for(long long i=2;i<=M;i++)
        if(!mark[i])
        prime.push_back(i);
}
bool is_prime(long long n){
    long long i;
    for(i=0;prime[i]*prime[i] <= n; i++){
        if(n%prime[i]==0)return false;
    }
    return true;
}
int main()
{
    siv();//cout<< prime.size()<<endl;
    long long n,per_or_not,perfect,prime_or_not;
    while(scanf("%lld",&n)){
        if(n==0)break;
        per_or_not= pow(2,n) -1;//cout << per_or_not << endl;
        if(is_prime(per_or_not)){
            perfect=pow(2,n-1);
            printf("Perfect: %lld!\n",perfect*per_or_not);
        }
        else {
            if(is_prime(n))
            printf("Given number is prime. But, NO perfect number is available.\n");
        else
            printf("Given number is NOT prime! NO perfect number is available.\n");
        }

    }
}
