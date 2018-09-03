#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,one,two;
    char c[7];
    scanf("%d",&n);
    while(n--)
    {
       scanf("%s",c);
       one=0;two=0;
       for(i=0;c[i];i++);
       if(i==5)
        printf("3\n");
       else
       {
           if(c[1]=='n' || c[2]=='e')
            one++;
           if(c[0]=='o' || c[1]=='o')
           {
               one++;two++;
           }
         if(c[0]=='t' || c[2]=='w')
            two++;
        if(two>one)
            printf("2\n");
        else if(two==one)
        {
            for(i=0;i<3;i++)
            {
                if()
            }
        }
        else
            printf("1\n");
       }
    }
    return 0;
}
