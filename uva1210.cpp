#include<iostream>
#include<vector>
#include<algorithm>
#define M 1000000
using namespace std;
bool mark[M+2]={};
vector <int> prime;
void siv()
{
    for(int i=2;i*i<=M;i++)
        if(!mark[i])
        for(int j=2;j*i<=M;j++)
            mark[i*j]=true;
        for(int i=2;i<=M;i++)
            if(!mark[i])
            prime.push_back(i);
}
int main()
{
    int N,i,j,counter=0,sum;
    siv();
    while(cin>>N)
    {
        if(N==0)break;counter=0;
        for(i=0;prime[i]<=N;i++)
        {
            if(prime[i]==N)
            {counter++;
            break;
            //cout<< "yes ";
            }
            else{
            sum=prime[i];
            for(j=i+1;prime[j]<=N;j++)
            {
                if(sum==N)
                {
                    counter++;break;
                }
                else if(sum>N)
                {
                    break;
                }
                 sum+=prime[j];
            }
            }
//cout<<sum<< " ";
        }
        cout<< counter <<endl;
    }
    return 0;
}

