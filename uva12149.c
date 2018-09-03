#include<stdio.h>
#include<math.h>
int main()
{
    int N,i,sum;
    while(scanf("%d",&N)==1)
    {
        sum=0;
        if(N==0)
            break;
        for(i=1;i<=N;i++)
        {
            sum+=pow(i,2);
        }
        printf("%d\n",sum);
    }return 0;
}
//it's accepted :)..
