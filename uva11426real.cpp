#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
long int gcd(long int a,long int b)
{
    if(a%b==0) return b;
    return gcd(b,a%b);
}
int main()
{
    long int N,i,j,G;
    while(true)
    {
        cin>>N;
        if(N==0)break;
        G=0;

    for(i=1;i<N;i++){
    for(j=i+1;j<=N;j++)
    {
    G+=gcd(i,j);
    }
    }
    printf("%ld\n",G);
    }

    return 0;
}
