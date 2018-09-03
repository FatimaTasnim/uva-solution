#include<iostream>
using namespace std;
int main()
{
    float n,f,s,a,e,sum=0;
    while(cin>>n)
    {
        while(n--)
        {
            sum=0;
            cin>>f;
            while(f--)
            {
                cin>>s>>a>>e;
                sum+=((s/a)*e)*a;
            }
            cout<<sum<<endl;
        }

    }
    return 0;
}
