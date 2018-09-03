#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,maxima,minima;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d%d",&a,&b);
        if(a>b){
            maxima=a;
            minima=b;
        }
        else{
            maxima=b;
            minima=a;
        }
        if(maxima%minima==0)
            printf("%d %d\n",minima,maxima);
        else
            printf("-1\n");
    }
}
