#include<stdio.h>
#include<math.h>
int main()
{
    int T,n,a,b,c,d;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d",&n);
        a=(n*567)/9;
        b=(a+7492)*235;
        c=(b/47)-498;
        d=(c/10)%10;
        if(d<0)
            d=d*-1;
        printf("%d\n",d);
    }return 0;
}
