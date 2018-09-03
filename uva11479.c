#include<stdio.h>
int main()
{
    long int N,l1,l2,l3,sum,c=1;
    scanf("%ld",&N);
        while(N>=c)
        {
            scanf("%ld%ld%ld",&l1,&l2,&l3);
            sum=0;
            if(l1>=l2 && l1>=l3)
            {
                if(l2+l3>l1) sum=1;
            }
            else if(l2>=l1 && l2>=l3)
            {
                if(l1+l3>l2) sum=1;
            }
            else if(l3>=l2 && l3>=l1)
            {
                if(l2+l1>l3) sum=1;
            }
            printf("Case %ld: ",c);
            if(sum==0)
                printf("Invalid\n");
            else
            {
               if(l1==l2 && l2==l3)
                printf("Equilateral\n");
                else if(l1!=l2 && l1!=l3 && l2!=l3)
                    printf("Scalene\n");
                else
                    printf("Isosceles\n");
            }c++;
        }
    return 0;
}
