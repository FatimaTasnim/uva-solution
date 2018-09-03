#include<stdio.h>
int main()
{
    unsigned int a,b,carried,sum,c,d,flag;

    while(scanf("%u %u",&a,&b)==2){
    if(a==0 && b==0)
        break;
    flag=0,carried=0;
    if(a>b)
    {
        c=a;d=b;
    }
    else
    {
        c=b;d=a;
    }
    while(c!=0)
    {
       sum=carried+d%10+c%10;
       d=d/10;c=c/10;
       if(sum>=10)
       {
           carried=1;
           flag++;
       }
       else
        carried=0;
    }
    if(flag==0)
        printf("No carry operation.\n");
        else if(flag==1)
        {
            printf("1 carry operation.\n");
        }
    else
        printf("%u carry operations.\n",flag);
    }
    return 0;
}
// it's accepted :)
