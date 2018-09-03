#include<stdio.h>
int main()
{
int a,b,c,T,i=1;
scanf("%d",&T);
        while(i<=T)
            {
             scanf("%d %d %d",&a,&b,&c);
             if((a>b&&a<c)||(c<a&&a<b))
             printf("Case %d: %d\n",i,a);
             if((b>a&&b<c)||(c<b&&b<a))
            printf("Case %d: %d\n",i,b);
            if((c>a&&b>c)||(c>b&&a>c))
            printf("Case %d: %d\n",i,c);
            i++;
             }
return 0;
}
