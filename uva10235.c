#include<stdio.h>
int check_prime(int sum)
{
    int flag=0,j;
    for(j=2; j<sum; j++)
    {
        if(sum%j==0)
        {
            flag=1;
            break;
        }
    }
    return flag;
}
int main()
{
    int N,temp,s,t,e;
    while(scanf("%d",&N)==1)
    {
        s=0;
        temp=check_prime(N);
        if(temp==0 && N>=10)
        {
            e=N;
            while(e!=0)
            {
                t=e%10;
                s=s*10+t;
                e/=10;
            }
            //printf("%d ",s);
            if(s!=N)
            {
                if(check_prime(s)==0)
                {
                    temp=2;
                }
            }
        }
        if(temp==2)
            printf("%d is emirp.\n",N);
        else if(temp==0)
            printf("%d is prime.\n",N);
        else
            printf("%d is not prime.\n",N);
    }
    return 0;
}
// it's accepted.. :)
