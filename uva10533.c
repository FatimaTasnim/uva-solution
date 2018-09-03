#include<stdio.h>
//#include<bits/stdc++.h>
#include<math.h>
int check_prime(int sum){
    int flag=0,j;
for(j=2;j<=(sum/2);j++)
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
    int t,a,b,i,p,s,sum;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&a,&b);
        sum=0;
        for(i=a;i<=b;i++)
        {
            if(check_prime(i)==0)
            {
                p=i;s=0;
                while(p!=0)
                {
                    s=s+p%10;p=p/10;
                }
                //printf("%d ",s);
                if(check_prime(s)==0)
                {
                   //printf("yes\n");
                   sum++;
                }

            }
        }printf("%d\n",sum);
    }
    return 0;
}
