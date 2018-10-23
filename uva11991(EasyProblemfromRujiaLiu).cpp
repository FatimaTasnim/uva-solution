#include<bits/stdc++.h>
using namespace std;

vector<int> occurrence[1000005];

void initializing(){
    for(int i=0;i<1000001;i++)
        occurrence[i].clear();

    return;
}

void output(int k, int val){
    if(occurrence[val].size()<k){
        printf("0\n");
        return;
    }
    printf("%d\n",occurrence[val][k-1]);
    return;
}

void input(){
    int n, m,val,k;
    while(scanf("%d%d", &n, &m)==2){
        initializing();
        for(int i=0;i<n;i++){
            scanf("%d", &val);
            occurrence[val].push_back(i+1);
        }

        while(m--){
            scanf("%d%d", &k, &val);
            output(k, val);
        }
    }
    return;
}

int main()
{
    input();
    return 0;
}
