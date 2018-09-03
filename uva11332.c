#include<stdio.h>
int main()
{
    int s,i,p,u,r;
    while(1)
    {
        scanf("%d",&s);
        if(s==0)
            break;
            r=s;
        u=0;
        if(s<10){
            printf("%d",s);
            break;}
            while(r>9){
            for(i=0;r!=0;i++)
            {
                p=r%10;
                r=r/10;
                u=u+p;
            }
            r=u;}
            printf("%d\n",u);
    }
}
// not a correct version.. :)
