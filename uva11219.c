#include<stdio.h>
int main()
{
   int d,m,y,d1,m1,y1,years,t,c;
   while(scanf("%d",&t)==1){
   for(c=1;c<=t;c++)
   {
       scanf("%d/%d/%d",&d,&m,&y);
       scanf("%d/%d/%d",&d1,&m1,&y1);
       years=y-y1;
       if(m<m1)
        years--;
       else if(m==m1)
       {
           if(d<d1)
            years--;
       }
       printf("Case #%d: ",c);
       if(years>130)
       printf("Check birth date\n");
       else if(years>=0 && years<=130)
        printf("%d\n",years);
       else
        printf("Invalid birth date\n");
   }
   }return 0;
}

