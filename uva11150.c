#include<stdint-gcc.h>
#include<stdio.h>
int main()
{
    int n,r,s,p,sum;
    while(scanf("%d",&n)==1)
    {
        r=n;
        sum=n;
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
//its accepted
