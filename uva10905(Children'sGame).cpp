#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int n,a,integer;
    stack<int> child;
    while(scanf("%d",&n)){
            if(n==0)break;
    while(n--)
    {
        scanf("%d",&integer);
        child.push(integer);
    }
    while(!child.empty()){
        printf("%d",child.top());
        child.pop();
    }
    printf("\n");
    }
}
