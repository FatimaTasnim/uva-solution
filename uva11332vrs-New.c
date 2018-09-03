#include<stdio.h>
int main()
{
    int n,x,s,r,sum;
    while(scanf("%d",&n)==1)
    {
        if(n==0)
            break;
        r=n;
        while(r>=10)
        {
            sum=0;
            x=r;
            while(x!=0)
            {
                s=x%10;
                sum+=s;
                x/=10;
            }
            r=sum;
        }
        printf("%d\n",r);
    }return 0;
}
//it's accepted :)
