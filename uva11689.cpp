#include<iostream>
using namespace std;
int main()
{
    int c,r,b,a,sum,t;
    cin>>t;
    while(t--)
    {
        cin>>c>>r>>b;
        a=c+r;sum=0;
        while(a>=b)
        {
            sum+=a/b;
            a=a/b+a%b;
        }
        cout<< sum << endl;
    }
    return 0;
}
