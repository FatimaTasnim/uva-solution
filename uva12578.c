#include<stdio.h>
#include<math.h>
#define PI acos(-1.0)
int main()
{
    double L,W,R,g,r;
    int h;
    scanf("%d",&h);
    while(h--){
    scanf("%lf",&L);

    W=L*6/10;
    R=L/5;
    //printf("%f %f ",W,R);
    g=(W*L)-(PI*R*R);
    r=(W*L)-g;
    printf("%.2lf %.2lf\n",r,g);
    }
    return 0;
}
