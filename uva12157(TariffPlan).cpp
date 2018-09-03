#include<bits/stdc++.h>
using namespace std;
int main()
{
    int c,n;
    int a,r1,r2;
    scanf("%d",&c);
    for(int i=1;i<=c;i++)
    {
        scanf("%d",&n);
        r1=r2=0;
        while(n--)
        {
            scanf("%d",&a);
                r1+=(a/30+1)*10;
                r2+=(a/60+1)*15;

        }
        if(r1<r2){
                printf("Case %d: ",i);
            printf("Mile %d\n",r1);
        }
        else if(r2<r1){
                printf("Case %d:",i);
        printf(" Juice %d\n",r2);
        }
        else
          printf("Case %d: Mile Juice %d\n",i,r2);
    }
}
