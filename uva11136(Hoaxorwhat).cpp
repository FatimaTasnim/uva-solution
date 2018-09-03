#include<bits/stdc++.h>
using namespace std;
int main()
{
    multiset <int> :: iterator it;
    multiset <int> fazil;
    long long prize;
    int n,c,a,i;
    while(scanf("%d",&n))
    {
        if(n==0)break;
        prize=0;
            fazil.clear();
        while(n--)
        {
            scanf("%d",&c);
            for(i=0;i<c;i++)
            {
                scanf("%d",&a);
                fazil.insert(a);
            }
            it=fazil.end();
           // cout<< fazil.end();
            it--;
            prize+=*it-*fazil.begin();
            fazil.erase(it);
            fazil.erase(fazil.begin());
        }
        printf("%lld\n",prize);
    }

}
