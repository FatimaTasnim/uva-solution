#include<bits/stdc++.h>
#define sfl(n) scanf("%lld",&n);
#define sf(n) scanf("%d",&n);
#define pf printf;
using namespace std;
int main()
{
    long long num,rev=0,prev,temp;
    bool flag=false;
    int c,i;
    sf(c);
    while(c--)
    {i=0;rev=0;
        sfl(num);
        prev=num;
        temp=num;
        while(true)
        {
        while(temp!=0)
        {
            rev=(rev*10)+(temp%10);temp/=10;
        }
        //cout<< rev << " " <<prev<<endl;
        if(rev==prev)
         {
            printf("%d %lld\n",i,prev);
         break;
         }
        prev=prev+rev;
        temp=prev;
        rev=0;i++;
        }flag=false;
    }
}
