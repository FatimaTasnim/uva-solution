#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,string> p;
    string domain,english,foreign,search_for;
    while(getline(cin,domain))
    {
        if (domain.size() == 0)
				break;
        stringstream ss(domain);
        ss >> english;
        ss >> foreign;
        p[foreign] = english;
    }
    while(cin>>search_for)
    {
        if(p.count(search_for)==0)
            printf("eh\n");
        else
            cout<<p[search_for]<<endl;
    }

}
