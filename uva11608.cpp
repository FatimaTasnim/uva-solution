#include <bits/stdc++.h>
using namespace std;

int a[13],b[13];

int main()
{
    int n,k=0;
    while(~scanf("%d",&n))
    {
        if(n<0) break;
        for(int i=0;i<12;i++) cin>>a[i];
        for(int i=0;i<12;i++) cin>>b[i];
        int sum=n;

        printf("Case %d:\n",++k);

        for(int i=0;i<12;i++){
            if(b[i]<=sum){
                printf("No problem! :D\n");
                sum-=b[i];

            }
            else printf("No problem. :(\n");
            sum+=a[i];
        }


    }


    return 0;
}
