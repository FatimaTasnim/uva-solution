#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    long int n,i;
    int x;
    while(true)
    {
        cin >> n;
        if(n==0)
        break;
        vector<long int> st;
        for(i=0;i<n;i++)
        {
            cin>> x;
            st.push_back(x);
        }
        sort(st.begin(),st.end());
        for(i=0;i<n-1;i++)
        cout <<st[i]<< " ";
        cout << st[n-1];
        cout <<endl;
        st.erase(st.begin(),st.end());
    }return 0;
}
