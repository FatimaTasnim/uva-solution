#include<bits/stdc++.h>
using namespace std;
int main()
{
    int g,n,k=1,initial,hg,prev,next,i,maxima;
    int arr[100001];
    //freopen("test9.txt","r",stdin);
    //freopen("test2.txt","w",stdout);
    scanf("%d",&g);
    while(g--){
        maxima=-1;
        scanf("%d",&n);
        prev=0;
        for(i=0;i<n;i++){
            scanf("%d",&arr[i]);
            if((arr[i]-prev)>maxima)
                maxima=arr[i]-prev;
            prev=arr[i];
        }
        initial=maxima;
        prev=0;
        for(i=0;i<n;i++){
            if(arr[i]-prev==maxima){
            maxima--;
            }
            else if((arr[i]-prev)>maxima){
                initial++;
                break;
            }
            prev=arr[i];
        }
        printf("Case %d: %d\n",k++,initial);
    }
}
