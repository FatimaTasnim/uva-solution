#include<stdint-gcc.h>
#include<stdio.h>
int main()
{
    while(1)
    {
        int n,r,s,p,sum;
        scanf("%d",&n);
        if(n==0)
            break;
        r=n;
        sum=0;
        while(1)
        {
            p=r/3;
            sum+=p;
            s=r%3+p;
            if(s>=3)
                r=s;
            else if(s==2)
            {
                sum++;
                break;
            }
            else
                break;
        }
        printf("%d\n",sum);
    }return 0;
}
//it's accepted :)
