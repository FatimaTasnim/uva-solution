#include<bits/stdc++.h>

using namespace std;

int main(){
    double d,v,u,t1,t2;
    int n;

    scanf("%d",&n);
    for(int c=1;c<=n;c++){
        cin>>d>>v>>u;

        if(v>=u || u==0 || v==0){
            printf("Case %d: can't determine\n",c);
        }
        else{
        t1=d/u;
        t2=d/sqrt(u*u-v*v);

        printf("Case %d: %.3lf\n",c,fabs(t2-t1));}
    }
}
