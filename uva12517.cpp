#include<iostream>
using namespace std;
int main()
{
    int a,b,i,sum;
    while(cin>>a>>b)
    {
        sum=0;
        if(a==0 && b==0)break;
        for(i=a;i<=b;i++)
            sum+=i;
        cout<<sum<<endl;
    }
}
