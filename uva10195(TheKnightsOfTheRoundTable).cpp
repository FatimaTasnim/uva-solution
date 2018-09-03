#include<bits/stdc++.h>
#define PI 2*acos(0.0)
using namespace std;
int main()
{
    double a,b,c,s,area_t,area_c,r;
    while(scanf("%lf%lf%lf",&a,&b,&c)==3)
    {
        if(a==0 || b==0 || c==0)
            printf("The radius of the round table is: 0.000\n");
        else{
        s=(a+b+c)/2;
        area_t=sqrt(s*(s-a)*(s-b)*(s-c))/((a+b+c)/2);
        //r= sqrt(area_t/PI);
        printf("The radius of the round table is: %.3lf\n",area_t);
        }
    }
}
