#include<bits/stdc++.h>
using namespace std;

int Pow[31];
vector<int> bin;

void powers(){
    Pow[0] = 1;
    for(int i=1;i<31;i++)
        Pow[i] = Pow[i-1]*2;
    return;
}

void output(int n){
    int a=0, b=0, flag = 1;
    bin.clear();

    while(n){
        bin.push_back(n%2);
        n/=2;
    }
    //reverse(bin.begin(), bin.end());

    for(int i=0;i<bin.size();i++){
        if(bin[i] && flag)a+= Pow[i], flag = 0;
        else if(bin[i] && !flag)b+= Pow[i], flag = 1;
    }

    printf("%d %d\n", a, b);

    return;
}

void input(){
   // freopen("out.txt", "w", stdout);
    int n;
    while(scanf("%d", &n)){
        if(!n)break;
        output(n);
    }

    return;
}

int main()
{
    powers();
    input();
}
