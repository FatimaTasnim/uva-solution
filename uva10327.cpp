#include<stdio.h>
int main()
{
    int n,a[1000],i,c,p,temp;
    while(scanf("%d",&n)==1)
    {
        c=0;p=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0;i<n;i++)
        {
            if(a[i]>a[i+1])
            {
                c++;
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
        for(i=n-1;i>=0;i--)
        {
            if(a[i]<a[i-1])
            {
                p++;
                temp=a[i];
                a[i]=a[i-1];
                a[i-1]=temp;
            }
        }
        printf("%d %d ",c,p);
        if(c<=p)
            printf("Minimum exchange operations : %d\n",c);
        else
            printf("Minimum exchange operations : %d\n",p);
    }
}
//not solved
