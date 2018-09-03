#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    long double i,j,sum,n;
    while(cin>>n)
    {
        sum=0;
        j=0;
    for(i=n;i>=0;i+=2){
        if(j==n)
        break;
           // cout<<i<< " ";
        sum+=i;
    j++;

    }
    cout<<sum<<endl;
    }
}
