#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    long double y;
    scanf("%d",&n);
    while(n--)
    {
        cin>> y;
        cout.setf(ios::fixed);
        cout<<setprecision(0)<< sqrt(y)<<endl;
    }
}
