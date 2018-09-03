#include<stdio.h>
int main()
{
    int t,c=1,x,i,y,sum;
    scanf("%d",&t);
    while(c<=t)
    {
        scanf("%d %d",&x,&y);
        sum=0;
        for(i=x;i<=y;i++)
        {
            if(i%2!=0)
            sum+=i;
        }
        printf("Case %d: %d\n",c,sum);
        c++;
    }return 0;
}
