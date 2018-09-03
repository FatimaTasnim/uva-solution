#include<stdio.h>
int main()
{
    int v,i,h;
    while(1)
    {
        scanf("%d",&v);
        if(v<0)
            break;
            h=1;
        for(i=1;i<=v;i++)
            h+=v;
        printf("%d\n",h);
    }return 0;
}

