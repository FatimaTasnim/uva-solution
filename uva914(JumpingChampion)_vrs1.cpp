#include<bits/stdc++.h>
#define M 1000000
int mark[M+2];
using namespace std;

vector <int> prime;
map<int,int>keeper,counter;

void siv()
{
    int prev;
    for(int i=2; i*i<=M; i++)
        if(!mark[i])
            for(int j=i; j*i<=M; j++)
                mark[i*j]=true;
    prime.push_back(2);
    prev=2;
    for(int i=3; i<=M; i++)
        if(!mark[i])
        {
            prime.push_back(i);
            keeper[prev]=i;
            prev=i;
        }
}

int main()
{
    siv();
    int n,p,s,maxima,i,max_;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d%d",&p,&s);
        maxima=0;
        counter.clear();
        for(i=0;i<prime.size();i++)
        {
            if(prime[i]>s)
                break;
            if(prime[i]>=p && keeper[prime[i]]<=s){
              counter[keeper[prime[i]]-prime[i]]++;
              //cout<< prime[i]<< " " << keeper[prime[i]]-prime[i]<< " " << counter[keeper[prime[i]]-prime[i]]<< endl;;
            }
        }
        for(i=1;i<=180;i++)
        {
            if(counter[i]>maxima){
                   // cout<< keeper[prime[i]] << " " << prime[i] << endl;
                maxima=counter[i];
                max_= i ;
              }
              else if(maxima==counter[i])
              {
                  max_=-1;
              }
        }
        if(max_!=-1)
            printf("The jumping champion is %d\n",max_);
        else
            printf("No jumping champion\n");
    }
}
