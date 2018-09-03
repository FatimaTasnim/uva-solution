#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,s,r,sum,i;
    scanf("%d",&n);
    while(n--){
            scanf("%d",&m);
            s=0;
    for(i=45;i>=1;i--)
    {
        r=m-i;sum=0;
        while(r!=0)
        {
            sum += r%10;
            r/=10;
        }
        if(sum==i){
            s=m-i;
            break;
        }
    }
    printf("%d\n",s);
    }
}
