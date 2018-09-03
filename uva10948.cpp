#include<iostream>
#include<math.h>
#include<vector>
#include<algorithm>
#define M 1000000
using namespace std;
bool mark[M+2]={};
vector<int> prime;
bool siv()
{
    for(int i=2;i*i<=M;i++)
        if(!mark[i])
        for(int j=i;j*i<=M;j++)
         mark[i*j]=true;
    for(int i=2;i<=M;i++)
        if(!mark[i])
        prime.push_back(i);
}
int isPrime(int n)
{
    for(int i=2;i*i<=n;i++)
        if(n%i==0)return 0;
    return 1;
}
int main()
{
    int N,i,j,flag1,flag2,maxima;
    siv();
    while(cin>>N)
    {
        flag1=0;
        flag2=0;
        maxima=-1;
        if(N==0)break;
        cout<< N << ":" << endl;
        for(i=0;prime[i]<=N/2;i++)
        {
            if(isPrime(N-prime[i])==1)
            {
            cout<<prime[i] << "+" <<N-prime[i] <<endl;
            flag1=1;
            break;
            }

        }
        if(flag1==0)
              cout<< "NO WAY!"<<endl;

    }
    return 0;
}
