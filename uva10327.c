#include<stdio.h>
int main()
{
    int n,a[1000],min,max,c,p,i;
    while(scanf("%d",&n)==1)
    {
        max=0,min=9999,p=0,c=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            if(a[i]>max)
            {
                max=a[i];
                c++;
            }
            if(a[i]<min)
            {
                min=a[i];
                p++;
            }
        }
        if(c<p)
            printf("Minimum exchange operations : %d",c);
        else
            printf("Minimum exchange operations : %d",p);
    }
}
