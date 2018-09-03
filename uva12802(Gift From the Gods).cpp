#include<bits/stdc++.h>
#define M 1000000
using namespace std;
bool mark[M+2]={false};
bool siv()
{
    for(int i=2;i*i<=M;i++)
        if(!mark[i])
        for(int j=i;j*i<=M;j++)
         mark[i*j]=true;
}
int palindrome(int n)
{
    int p=n,r=0;
    while(p!=0)
    {
        r=r*10+p%10;
        p=p/10;
    }
    if(r==n) return 1;
    else return 0;
}
int main()
{
    int a,n;
    //freopen("tasnim.txt","r",stdin);
    while(scanf("%d",&a))
    {
        n=a*2;
        printf("%d\n",n);

        if(palindrome(n)==1 && palindrome(a)==1 && !mark[n] && !mark[a])
                break;

    }
}
