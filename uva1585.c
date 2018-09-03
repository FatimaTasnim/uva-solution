#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000];
    int i,n,sum,t;
    while(scanf("%d",&t)==1)
    {
        while(t--){
        sum=0,n=0;
        scanf("%s",str);
        //sum=0,n=0;
        for(i=0;str[i];i++)
        {
            if(str[i]=='X')
            {
                n=0;
            }
            else if(str[i]=='O')
            {
                n++;
                sum+=n;
            }
        }
        printf("%d\n",sum);
        }
    }return 0;
}
// it's accepted.. :)
