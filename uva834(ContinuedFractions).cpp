#include<bits/stdc++.h>
using namespace std;
int main()
{
    int v1,v2,i,j,d,temp;
    int a[100001];
    while(scanf("%d%d",&v1,&v2)==2){
            d=-10000000;
            i=0;
    while(1){
        a[i]=v1/v2;
        d=(v1-v2*a[i]);
        //cout << d << endl;
        temp= v1;
        v1=v2;
        v2=temp-(v2*a[i]);
        //cout << v1 << " " << v2 << endl;
        i++;
        if(d==0)break;
    }
    for(j=0;j<i;j++){
        if(j==0)
            printf("[%d;",a[j]);
        else if(j==i-1)
            printf("%d]\n",a[j]);
        else printf("%d,",a[j]);
    }
    }
    return 0;
}
