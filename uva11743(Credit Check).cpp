#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n1,n2,n3,n4,r,sum,i,n;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d%d%d%d",&n1,&n2,&n3,&n4);
        sum=0;
        for(i=1;i<=4;i++)
        {
            if(i%2==0)
            {
                r=(n1%10)*2;
                while(r!=0)
                sum += r%10,r/=10;
                r=(n2%10)*2;
                while(r!=0)
                sum += r%10,r/=10;
                r=(n3%10)*2;
                while(r!=0)
                sum += r%10,r/=10;
                r=(n4%10)*2;
                while(r!=0)
                sum += r%10,r/=10;
            }
            else sum+=n1%10+n2+10+n3%10+n4%10;
            n1/=10,n2/=10,n3/=10,n4/=10;
        }
        if(sum%10==0)printf("Valid\n");
        else printf("Invalid\n");
    }
}
