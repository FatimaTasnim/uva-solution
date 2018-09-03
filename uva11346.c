#include<stdio.h>
int main()
{
    int n,k,r,sum;
    while(scanf("%d%d",&n,&k)==2 && k>1){
            sum=0;
    r=n;
    while(r>=k)
    {
        r=r/k;
        sum=sum+r;
    }
    printf("sum:%d",sum);
    printf("n=%d\n",n+sum);
    }
    return 0;
}
