#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    long long a,b;
    while(scanf("%lld%lld",&a,&b)==2)
    {
        if(a>b) swap(a,b);
        printf("%lld\n",b-a);
    }
    return 0;
}
