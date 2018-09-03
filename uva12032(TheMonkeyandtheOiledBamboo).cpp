#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q,prev,i,mx,r,sum;
    int a[101];
    scanf("%d",&n);
    while(n--){
            mx=prev=0;
            sum=0;
        scanf("%d",&q);
        for(i=0;i<q;i++){
            scanf("%d",&a[i]);
            if(a[i]>prev){
                prev=a[i];
                if(prev>mx)mx=prev;
            }
            if(prev==mx){
                prev--;
            }
        }
         printf("%d\n",mx);
    }
}
