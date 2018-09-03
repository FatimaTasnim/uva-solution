#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m, c;
    while( scanf("%d%d", &n, &m)==2){
        int x=1;
        for(int i=1;i<=n;i++){
            x = x*i;
            x = x%m;
            if(!x)break;
        }
        if(!x)printf("%d divides %d!\n", m,n);
        else printf("%d does not divide %d!\n",m,n);
    }
}
