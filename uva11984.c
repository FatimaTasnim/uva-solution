#include<stdio.h>
int main()
{
    int N,c=1;
    float C,F,change,f_c;
    scanf("%d",&N);
    while(N>=c)
    {
        scanf("%f%f",&C,&change);
        if(change==0)
            f_c=C;
        else{
        F=9*C/5+32+change;
        f_c=((F-32.0)*5)/9;}
        printf("Case %d: %.2f\n",c,f_c);
        c++;
    }return 0;
}
//it's accepted :)..
