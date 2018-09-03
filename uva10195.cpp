#include<iostream>
#include<stdio.h>
#include<vector>
#include<algorithm>
#include<math.h>
using namespace std;
int main()
{
    double a,b,c,max,min;
    while(scanf("%lf%lf%lf",&a,&b,&c)==3)
    {


            if(a<=b && a<=c)
            min=a;
        else if(b<=a && b<=c)
            min=b;
        else if(c<=a && c<=b)
            min=c;
            printf("The radius of the round table is: %.3lf\n",sqrt(min));

    }return 0;
}
//not yet solved :)..
