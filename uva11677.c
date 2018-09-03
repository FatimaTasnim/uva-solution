#include<stdio.h>
int main()
{
    int h1,m1,h2,m2,hours,mn,total_mnt;
    while(1)
    {
        mn=0;
        scanf("%d %d %d %d",&h1,&m1,&h2,&m2);
        if(h1==0 && m1==0 && h2==0 && m2==0)
            break;
            hours=h2-h1;
            mn=m2-m1;
            if(hours==0 && m1>m2)
            {
                hours+=23;
                mn+=60;
            }
            if(hours<0)
            {
                hours+=24;
            }
            if(mn<0)
            {
                hours--;
                mn+=60;
            }
        total_mnt=(hours*60)+mn;
        printf("%d\n",total_mnt);
            }
            return 0;
}
