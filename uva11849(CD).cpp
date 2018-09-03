#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int> sentu;
    int n,a,b,i;
    while(scanf("%d%d",&a,&b))
    {
        if(a==0 && b==0)break;
        for(i=0;i<a;i++)
        {
            scanf("%d",&n);
            sentu.insert(n);
        }
        for(i=0;i<b;i++)
        {
            scanf("%d",&n);
            sentu.insert(n);
        }
        //cout<<a<<" "<<b << " " <<sentu.size()<<endl;
        cout<< (a+b)-sentu.size()<<endl;
        sentu.clear();
    }
}
