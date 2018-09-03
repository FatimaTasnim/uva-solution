#include<stdio.h>
#include<math.h>
int gcd(int a,int b)
{
    if(b==0)
    return a;
    else
    return gcd(b,a%b);
}
int main()
{
    int poltu,nut,boltu;
    scanf("%d",&poltu);
    while(poltu--)
    {
        scanf("%d%d",&nut,&boltu);
        if(gcd(boltu)==nut)
            scanf("%d\n",boltu);
        else
            scanf("-1\n");
    }
    return 0;
}
