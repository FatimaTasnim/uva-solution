#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    double x,y,r,temp;
    scanf("%d",&n);
    while(n--){
        scanf("%lf%lf%lf",&x,&y,&r);
        temp= sqrt((x*x)+(y*y));
        printf("%.2lf %.2lf\n",r-temp,r+temp);
    }
}
