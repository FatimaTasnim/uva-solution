#include<stdio.h>
#include<string.h>
int main()
{
    int a,l,sum,i,sub,j,flag;
    char place[2000000];
    //scanf("%d",&l);
    while(scanf("%d",&l))
    {
        if(l==0)
            break;
        sum=0,sub=0,flag=0;
        scanf("%s",&place);
        for(i=0;i<l;i++)
        {
            if(place[i]=='R')
            {
                sum=i;
                for(j=i+1;j<l;j++)
                {
                    if(place[j]=='Z')
                    {
                        sub=j;
                        break;
                    }
                }
                if(sub>0){
                        flag=1;
                    printf("%d\n",sub-sum);
                    break;
                }
            }
        }
        if(flag==0)
            {
                printf("0\n");
            }
    }
    return 0;
}
