#include<bits/stdc++.h>
#define PI 2*acos(0.0)
using namespace std;
int main()
{
    double a,b,c,circle,tringle,area_c,area_t,area_I,rad_c,rad_I,s;
    while(scanf("%lf%lf%lf",&a,&b,&c)==3)
    {
        rad_c= (a*b*c)/(sqrt((a+b+c)*(b+c-a)*(c+a-b)*(a+b-c)));
        area_c= PI * (rad_c*rad_c);
        s=(a+b+c)/2;
        area_t=sqrt(s*(s-a)*(s-b)*(s-c));
        rad_I= (2*area_t)/(a+b+c);
        area_I= PI * (rad_I*rad_I);
        tringle= area_t-area_I;
        circle= area_c-area_t;
        printf("%.4lf %.4lf %.4lf\n",circle,tringle,area_I);
    }
}
