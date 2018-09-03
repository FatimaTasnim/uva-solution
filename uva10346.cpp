#include<iostream>
using namespace std;
int main()
{
    int b,a,sum;
    while( cin>>a>>b)
    {
        sum=a;
        while(a>=b)
        {
            sum+=a/b;
            a=a/b+a%b;
        }
        cout<< sum << endl;
    }
    return 0;
}

