#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int N,T,c=1,b,ans,i;
    cin>>T;
    while(T--)
    {
        vector <int> t;
        cin>>N;
        for(i=0;i<N;i++)
        {
            cin>>b;
            t.push_back(b);
        }
        sort(t.begin(),t.end());
        cout<< "Case "<<c<< ": "<<t[N-1]<<endl;
        t.erase(t.begin(),t.end());
        c++;
    }return 0;
}
