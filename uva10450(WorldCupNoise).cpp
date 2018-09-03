#include<bits/stdc++.h>
using namespace std;
long long arr[52];
void Tasnim()
{
    arr[1]=2;arr[2]=3;
    long long prev=2;
    for(int i=3;i<=51;i++)
    {
       arr[i]=arr[i-1]+arr[i-2];
    }
}
int main()
{
    Tasnim();
    int c,t;
    scanf("%d",&c);
    for(int j=1;j<=c;j++)
    {
        scanf("%d",&t);
        printf("Scenario #%d:\n%lld\n\n",j,arr[t]);
    }
    return 0;
}
