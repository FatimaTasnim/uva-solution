#include<bits/stdc++.h>
using namespace std;
long long decimal_ternary(long long n)  /* Function to convert decimal to binary.*/
{
    long long rem, i=1, binary=0;
    while (n!=0)
    {
        rem=n%3;
        n/=3;
        binary+=rem*i;
        i*=10;
    }
    return binary;
}
int main()
{
    long long ll;
    while(scanf("%lld",&ll))
    {
        if(ll<0)break;
        printf("%lld\n",decimal_ternary(ll));
    }
}
