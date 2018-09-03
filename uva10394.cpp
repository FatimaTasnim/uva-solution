#include<iostream>
#include<vector>
#include<algorithm>
#define M 20000000
using namespace std;
bool mark[M+2]={} ;
vector<long long int> prime;
void siv()
{
    long long int i,j;
    for(i=2; i*i<=M;i++)
    if(!mark[i])
        for(j=i; i*j<=M;j++)
         mark[i*j]=true;
   for( int i=2;i<=M; i++){
   if(!mark[i] && !mark[i+2]){
   prime.push_back(i);
   prime.push_back(i+2);
   }
   else if(mark[i-2] && !mark[i] && !mark[i+2])
    prime.push_back(i);
   }
}
int main()
{
    int N;
    siv();
    while(cin>>N)
    {
        cout<< "(" << prime[N*2-2]  << ", "<<prime[N*2-1] << ")" <<endl;
    }
    return 0;
}
