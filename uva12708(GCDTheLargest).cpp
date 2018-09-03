#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a;
    int n;
    scanf("%d",&n);
    while(n--){
        scanf("%lld",&a);
        printf("%lld\n",a>>1);
    }
}
