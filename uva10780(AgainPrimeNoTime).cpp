#include<bits/stdc++.h>
#define s(Z)        scanf("%d",&Z)
#define s2(Z,W)     scanf("%d%d",&Z,&W)
using namespace std;
int main()
{
    int n,m,c,cn,k=1,r,i;
    s(c);
    while(c--){
        s2(m,n);
        cn=0;
        for(i=1;i<=n;i++){
            r=i;
            while(r%m==0){
                cn++;
                r/=m;
            }
        }
        if(cn==0)cout << "Case "<<k++ << "\nImpossible to divide\n";
        else
        printf("Case %d:\n%d\n",k++,cn);
    }
}
