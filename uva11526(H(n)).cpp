#include<bits/stdc++.h>
using namespace std;
int main()
{
     int c,n,l;
     scanf("%d", &c);
    while(c-- ){
        scanf("%d", &n);
        long long res = 0;
        if(n > 0){
           l = ceil(sqrt(n));
           for( int i = 1; i < l; i++ ){
                res = (res + n/i);
                }

            //if(n / L > L) res += L;
        }res--;
        res+=res*2-(l*l);
        printf("%lld\n", res);
    }
    return 0;
}
//Tle :(

