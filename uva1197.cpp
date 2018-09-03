#include<bits/stdc++.h>
using namespace std;
int par[30005];
void fix(int n){
    for(int i=1;i<=n;i++){
        par[i] = i;
    }
}
int return_parent(int n){
    if(par[n]==n)return n;
    return par[n] = return_parent(par[n]);
}
void make_group(int a, int b){
    a = return_parent(a);
    b = return_parent(b);
    if(a>b)swap(a,b);
    par[b] = a;
}

int main()
{
    int n, m, suspect, k, i, new_, old;
    //freopen("tas_in.txt", "r", stdin);
    //freopen("tas_out", "w", stdout);
    while(scanf("%d%d", &n, &m)){
        if(!n && !m)break;
        fix(n);
        suspect = 0;
        while(m--){
            scanf("%d", &k);
            for(i=0;i<k;i++){
                scanf("%d", &new_);
                if(i)make_group(new_, old);
                par[new_] = return_parent(new_);
                if(!i){
                    old = new_;
                    continue;
                }
                old = new_;
            }
        }
        //for(i=0;i<=n;i++)return_parent(i);
        for(i=0;i<=n;i++){
            //cerr  << i << " " << par[i] << endl;
            if(!return_parent(i))suspect++;
        }
        printf("%d\n", suspect);
    }

}
