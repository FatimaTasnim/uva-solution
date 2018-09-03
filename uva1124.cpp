#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n==0)
        printf("1\n");
    else if(n>=1)
        printf("%d\n",(n*(n+1))/2);
    else
    {
        printf("%d",((-1)* (n*(n-1)/2))+1);
    }
    return 0;
}
