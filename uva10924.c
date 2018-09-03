#include<stdio.h>
#include<string.h>
int main()
{
    char ch[20];
    int i,sum,j,flag;
    while(scanf("%s",ch)==1)
    {
        sum=0;
        for(i=0;ch[i];i++)
        {
            if(ch[i]>=97 && ch[i]<=122)
            {
                sum+=ch[i]-96;
            }
            else if(ch[i]>=65 && ch[i]<=90)
                sum+=ch[i]-38;
        }
        flag=0;
        for(j=2;j<sum;j++)
        {
            if(sum%j==0)
            {
                printf("It is not a prime word.\n");
                flag=1;
                break;
            }
        }
            if(flag==0)
                printf("It is a prime word.\n");
    }
   return 0;
}
//it's accepted :)
