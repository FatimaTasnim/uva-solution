#include<bits/stdc++.h>
using namespace std;

string flag;
int parent[10005], sum[10005], money[10005];

void init(int n){
    for(int i=1;i<=n;i++){
        parent[i] = i;
        sum[i] = 0;
    }
    flag = "POSSIBLE";
    return ;
}

int find_parent(int n){
    if(parent[n]==n)return n;
    return parent[n] = find_parent(parent[n]);
}

void make_union(int a, int b){
    int x = find_parent(a);
    int y = find_parent(b);

    if(x>y)swap(x,y);
    parent[y] = x;

    return;
}

int main()
{
    int c,friends,relationships, a, b;

    scanf("%d", &c);
    while(c--){
        scanf("%d%d", &friends, &relationships);
        init(friends);

        for(int i=0;i<friends; i++){
            scanf("%d", &money[i+1]);
        }

        for(int i=0;i<relationships; i++){
            scanf("%d%d", &a, &b);
            make_union(a+1, b+1);
        }

        for(int i=1;i<=friends;i++)sum[find_parent(i)] += money[i];

        for(int i=1;i<=friends;i++){
            if(sum[i]!=0){
                flag = "IMPOSSIBLE";
                break;
            }
        }
        cout << flag << endl;
    }
}
