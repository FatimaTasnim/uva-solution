#include<stdio.h>
int main()
{
    int T,c=1,b,x=0,p,t,f=0;
    float n;
    scanf("%d",&T);
    while(c<=T)
    {
        scanf("%d",&b);
        t=b;
        while(1){
                if(t/3==0)
                break;
                n=t/3.0;
        t=t/3+f;
        printf("t=%d ",t);
        printf("n=%f ",n);
        p=b%3;
        printf("p=%d ",p);
        if(p!=0)
        {
            f+=1;
            n+=1;
        }
        else if(n<0 && p>0)
        {
            x+=3-t;
            t++;
            n+=1;
        }
        } printf("Case %d: %d\n",c,x);
        c++;
    }return 0;
}
