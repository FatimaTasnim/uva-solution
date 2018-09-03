#include<bits/stdc++.h>
using namespace std;
#define LLU long long unsigned int
int main()
{
    int c,N,i,temp,temp1,b1,b2;
    cin>>c;
    while(c--)
    {
        scanf("%d",&N);
        b1=0,temp=N;
        while(temp!=0)
        {
            b1+=(temp%2);
            temp/=2;
        }
        temp=N;
        temp1=0;
        for(i=1;N!=0;i*=16)
        {
            temp1+=(i*(N%10));
            N/=10;
        }
        b2=0;
        while(temp1!=0)
        {
            b2+=(temp1%2);
            temp1/=2;
        }
        cout<<b1<<" "<<b2<<endl;
    }
    return 0;
}
