#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int a[101],b,f,g,i,n;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>g;
        for(f=0;f<g;f++)
        {
            cin>>a[f];
        }
        sort(a,a+f);
        b=2*(a[g-1]-a[0]);
        cout<<b<<endl;
    }
    return 0;
}
