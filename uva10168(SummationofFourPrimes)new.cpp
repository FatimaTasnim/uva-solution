#include<bits/stdc++.h>
#define M 10000000
using namespace std;
int mark[M+2];
void siv()
{
    for(int i=2;i*i<=M;i++)
        if(!mark[i])
        for(int j=i;j*i<=M;j++)
        mark[i*j]=1;
}
int main(){
    siv();
int n,i;
//if(!mark[112223])
  //  printf("ok");
while(scanf("%d",&n)==1){
    if(n<8)
        printf("Impossible\n");
    else{
        if(n%2){
            printf("2 3 ");
            n-=5;
            for(i=2;i<=n;i++){
                if(!mark[i] && !mark[n-i]){
                    printf("%d %d\n",i,n-i);
                    break;
                }
            }
        }
            else{
                printf("2 2 ");
                n-=4;
                for(i=2;i<=n;i++){
                    if(!mark[i] && !mark[n-i]){
                        printf("%d %d\n",i,n-i);
                        break;
                    }
                }
            }
    }
}
}
