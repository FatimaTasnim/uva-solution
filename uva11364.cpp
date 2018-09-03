#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int T,n;
    cin>>T;
    while(T--)
    {
        int a,i;
        cin>>n;
        vector <int> take;
        for(i=0;i<n;i++)
        {
            cin>>a;
            take.push_back(a);
        }
        sort(take.begin(),take.end());
        cout<< (take[take.size()-1]-take[0])*2<<endl;
        take.erase(take.begin(),take.end());
    }
    return 0;
}
