#include<bits/stdc++.h>
using namespace std;
int par[20008];
int enemy (int n){return n+10000;}
int findfriends(int n){
    if(par[n]==n || par[n]==-1)return n;
    return par[n] = findfriends(par[n]);
}
int makefriends(int a, int b){
    a = findfriends(a), b = findfriends(b);
    if(a<b)swap(a,b);
    par[b] = a;
}
int fix(int n){
    memset(par, -1, sizeof par);
}
int main()
{
    int n,c,x,y;
    scanf("%d", &n);
    fix(n);
    while(1){
        scanf("%d%d%d", &c, &x,&y);
        if(c+x+y==0)break;
        if(c==1){
           if(findfriends(x)==findfriends(enemy(y))){
            printf("-1\n");
            continue;
           }
           makefriends(x, y);
           makefriends(enemy(x), enemy(y));
        }
        else if(c==2){
            if(findfriends(x)==findfriends(y)){
                printf("-1\n");
                continue;
            }
            makefriends(x, enemy(y));
            makefriends(enemy(x), y);
        }
        else if(c==3){
            printf("%d\n", (findfriends(x)==findfriends(y)));
        }
        else{
            printf("%d\n", (findfriends(x)==findfriends(enemy(y))));
        }
    }
}
