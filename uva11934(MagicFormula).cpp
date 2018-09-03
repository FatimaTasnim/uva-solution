#include<cstdio>

using namespace std;

int main()
{

    long long int hey,i,tasnim,a ,b ,c ,d ,L;

    while(scanf("%lld%lld%lld%lld%lld",&a,&b,&c,&d,&L)==5)
        {
            if(a==0&&b==0&&c==0&&d==0&&L==0)break;
            tasnim=0;
            for(i=0;i<=L;i++)
            {
                hey=(i*i*a)+(i*b)+c;
                if(hey%d==0)tasnim++;
            }
            printf("%lld\n",tasnim);
        }
}
