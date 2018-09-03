#include<stdint-gcc.h>
#include<stdio.h>
#include<math.h>
int main()
{
    int n,m,tax,c=1;
    scanf("%d",&n);

        while(n--)
        {
            tax=0;
            scanf("%d",&m);
            if(m<=180000)
                tax=0;
            else if(m>180000 && m<=480000){
                tax+=ceil((m-180000)*(.10));
                if(tax<2000)
                    tax=2000;
            }
            else if(m>480000 && m<=880000)
                tax+=30000+ceil((m-480000)*(.15));
            else if(m>880000 && m<=1180000)
                tax+=30000+ceil(400000*(.15))+ceil((m-880000)*(.20));
            else
                tax+=30000+ceil(400000*(.15))+ceil(300000*(.20))+ceil((m-1180000)*(.25));
            printf("Case %d: %d\n",c,tax);
            c++;
        }
return 0;
}
//accepted :)
