#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s, line;
    int n;
    set<string>st;
    set<string>:: iterator it;
    map<string, int>mp;
    cin>>n;
    while(n--)
    {
        cin>>s;
        getline(cin, line);
        mp[s]++;
        st.insert(s);
        //cout<<"done"<<endl;
    }
    for(it=st.begin();it!=st.end();it++)
        cout<<*it<<" "<<mp[*it]<<endl;
    return 0;
}

