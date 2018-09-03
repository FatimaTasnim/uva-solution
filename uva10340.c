#include<stdio.h>
#include<string.h>
int main()
{
    char a[1000000],b[1000000];
    int k,j,i,flag=0,flag1=0,t;
    while(scanf("%s %s",a,b)==2)
    {
        t=strlen(b);
        flag1=0;
        k=-1;
        for(i=0;a[i];i++)
        {
            flag=0;
            for(j=k+1;b[j];j++)
            {
                if(a[i]==b[j])
                {
                    k=j;
                    flag++;
                    break;
                }
            }
            if(flag==0)
            {
              flag1++;
              break;
            }
        }
       if(flag1==0)
            printf("Yes\n");
       else
        printf("No\n");
    }
 return 0;
}
//it's accepted.. :)
