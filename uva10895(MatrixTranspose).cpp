#include<bits/stdc++.h>
using namespace std;

struct pair_{
    int id;
    int val;

    pair_ (int id, int val):id(id), val(val){}
};

int idx[10005];
vector < pair_ > mat[10005];

void initializing(){
    for(int i=0;i<10005;i++){
        mat[i].clear();
    }
}

void output(int m, int n){
    printf("%d %d\n", m, n);

    for(int i=1;i<=m;i++){
        printf("%d", mat[i].size());

        for(int j=0;j<mat[i].size();j++){
            printf(" %d", mat[i][j].id);
        }
        printf("\n");

        for(int j=0;j<mat[i].size();j++){
            if(j)printf(" ");
            printf("%d", mat[i][j].val);
        }
        printf("\n");
    }
    return;
}

void input(){
    int m, n, nonzeros, value;

    while(scanf("%d%d", &m, &n)==2){
        initializing();

        for(int i=1;i<=m;i++){
            scanf("%d", &nonzeros);

            for(int j=1;j<=nonzeros;j++)scanf("%d", &idx[j]);

            for(int j=1;j<=nonzeros;j++){
                scanf("%d", &value);
                mat[idx[j]].push_back(pair_(i,value));
            }
        }

       // cerr << "Output \n";
        output(n, m);

    }

    return;
}

int main()
{
    input();
    return 0;
}
