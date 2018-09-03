#include<iostream>
using namespace std;
int main()
{
    int T,c=1,walls[50],high,low,n,t,t1,i;
    cin >> T;
    while(T>=c)
    {
        high=0,low=0,t=0,t1=0;
        cin>>n;
        cin>>walls[0];
        t=walls[0];
        for(i=1;i<n;i++)
        {
            cin>> walls[i];
            t1=walls[i];
            if(t1>t)
                high++;
            else if(t1<t)
            low++;
            t=t1;
        }
        cout<< "Case "<<c<< ": "<<high<< " " << low << endl;
        c++;
    }return 0;
}

