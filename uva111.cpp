#include<bits/stdc++.h>
using namespace std;
int mark[23], arr[23], lcs[23][23];
int main(){
    int n,x;
    scanf("%d\n",&n);

    for(int i=0;i<n;i++){
        scanf("%d",&x);
        mark[x-1]=i;
    }
    while(scanf("%d",&x)==1){
        arr[x-1]=0;
        for(int i=1;i<n;i++){
            scanf("%d",&x);
            arr[x-1]=i;
        }
        for(int i=n;i>=0;i--){
            for(int j=n;j>=0;j--){
                if(i==n || j==n){
                    lcs[i][j]=0;
                    continue;
                }
                if(mark[i]==arr[j]) lcs[i][j]=1+lcs[i+1][j+1];
                else lcs[i][j]=max(lcs[i][j+1],lcs[i+1][j]);
            }
        }
        printf("%d\n",lcs[0][0]);
    }
}
