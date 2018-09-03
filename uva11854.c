#include<stdio.h>
#include<math.h>
int main()
{
    int l1,l2,l3,sum;
    while(scanf("%d%d%d",&l1,&l2,&l3)==3)
    {
        sum=0;
        if(l1==0 && l2==0 && l3==0)
            break;
         if(l1>=l2 && l1>=l3)
            {
                if(l2*l2+l3*l3==l1*l1) sum=1;
            }
            else if(l2>=l1 && l2>=l3)
            {
                if(l1*l1+l3*l3==l2*l2) sum=1;
            }
            else if(l3>=l2 && l3>=l1)
            {
                if(l2*l2+l1*l1==l3*l3) sum=1;
            }
            if(sum==1)
            {
                printf("right\n");
            }
            else
                printf("wrong\n");
    }return 0;
}
//it's accepted :)..
