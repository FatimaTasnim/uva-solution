#include<bits/stdc++.h>
using namespace std;
struct thing{
    int idx;
    char value;
    bool operator<(const thing& rhs) const{
        if(value==rhx.value)return value< rhs.value;
        return idx<rhx.idx;
    }
};

int main()
{
    string str;
    while(cin>> str){
        if(str=="#")break;
        cin >> temp.idx >> temp.value;
        prio.push(temp);
    }

    cin >> n;
    while(n--){
        temp = prio.top();
        prio.pop();
        cout <<temp.idx <<endl;
        prio.push(temp*2);
    }

}
