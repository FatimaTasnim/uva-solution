#include<bits/stdc++.h>
using namespace std;
int main()
{
    int len,flag=1,i;
    string str,temp;
    multiset <string> st;
    set<string>::iterator it;
    while(getline(cin,str))
    {
        if(flag==1)
            temp+=str;
        else
            temp+=(" "+str);
            len=str.size();
        if(str[len-1]=='-')
            flag=1;
        else
            flag=0;
    }
    cout<< "ok";
    //for(i=0;temp[i];i++)
       // temp[i]=tolower(temp[i]);
    stringstream ss(temp);
    string x;
    while(ss>>x)
    {
        st.insert(x);
    }
    cout<< "doky";
    for (it = st.begin(); it != st.end(); it++)
    cout << *it << endl;
}
