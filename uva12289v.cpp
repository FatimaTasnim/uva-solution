#include<stdio.h>
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int n,i,one,two,g,f;
    string s1="one",s2= "two";
    char c[7];
    scanf("%d",&n);
    while(n--)
    {
       scanf("%s",c);
       one=0;two=0;g=0;f=0;
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
                if(c[i]==s1[i])
                    g++;
                if(c[i]==s2[i])
                    f++;
                if(g>f)
                {
                    printf("1\n");
                    break;
                }
                if(f>g)
                {
                    printf("2\n");
                    break;
                }
            }
        }
        else
            printf("1\n");
       }
    }
    return 0;
}
