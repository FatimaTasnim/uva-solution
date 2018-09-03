#include<stdio.h>
int main()
{
    int t,c,n[1000],i,sum,avrg,s;
    float above_avrg;
    scanf("%d",&t);

        while(t--){
        sum=0,s=0;
        scanf("%d",&c);
        for(i=0;i<c;i++)
        {
            scanf("%d",&n[i]);
            sum+=n[i];
        }
        avrg=sum/c;
        for(i=0;i<c;i++)
        {
            if(n[i]>avrg)
                s++;
        }
        above_avrg=(s*100.00)/c;
        printf("%.3f%%\n",above_avrg);
        }

    return 0;
}
// it is solved :)
