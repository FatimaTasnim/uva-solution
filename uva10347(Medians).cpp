#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,c,area_t,s;
    int i;
    for(i=0;i<1000;i++)
    {
        scanf("%lf%lf%lf",&a,&b,&c);
        s= (a+b+c)/2;
        area_t=(4.0/3.0)*(sqrt(s*(s-a)*(s-b)*(s-c)));
        if(area_t>0)
        printf("%.3lf\n",area_t);
        else
            printf("-1.000\n");
    }
}
