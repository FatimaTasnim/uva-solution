#include<stdio.h>
int main()
{
    int T,a,b,x,ans;
    float v;
    while(scanf("%d",&T)==1){
    while(T--)
    {
        scanf("%d%d%d",&a,&b,&x);
       // v=(x)*1.0/(a+b)*1.0;
        ans=x*(a*(a-b)/(a+b));
        if(ans<0)
            ans=0;
        printf("%d\n",ans);
    }}return 0;
}
