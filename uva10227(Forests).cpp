#include<bits/stdc++.h>
using namespace std;

char buffer[128];
int parent[105];
bool heard[105][105];
int persons, trees, person, tree, result;

bool IsSameSet(int a, int b){
    for(int i=1; i<=trees; i++){
        if(heard[a][i] != heard[b][i])return false;
    }
    return true;
}

int find_parent(int n){
    if(n==parent[n])return n;
    return parent[n] = find_parent(parent[n]);
}

void make_union(int a, int b){
    int x = find_parent(a);
    int y = find_parent(b);

    if(x == y)return;

    if(x>y)swap(x,y);
    //cerr << a << " " << b << " " << x << " " << y << endl;
    parent[x] = y;
    result--;
    return ;
}

int main()
{
    int c, flag = 0;
    gets(buffer);
    sscanf(buffer, "%d", &c);
    //gets(buffer);
    while(c--){
        memset(heard, false, sizeof heard);

        gets(buffer);
        sscanf(buffer, "%d%d", &persons, &trees);
        //cerr << "persons " << persons << " trees " <<  trees << endl;
        while(gets(buffer) && sscanf(buffer,"%d%d",&person,&tree) == 2) {
            heard[person][tree] = true;
        }

        result = persons;
        //cerr << "result init: " << result << endl;
        for(int i=0;i<=persons;i++)parent[i] = i;

        for(int i=1;i<=persons;i++){
            for(int j=i+1;j<=persons;j++){
                if(IsSameSet(i, j)){
                    make_union(i, j);
                }
            }
        }

        if(flag)printf("\n");
        flag = 1;
        printf("%d\n", result);
    }
}
