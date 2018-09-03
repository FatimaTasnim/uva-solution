#include<bits/stdc++.h>
using namespace std;
int survivor[40000];
void survivor_finding()
{
    survivor[1]=2;survivor[2]=3;survivor[3]=6;survivor[4]=5;survivor[5]=8;
    int child[40000];
    int maxima,sum,flag,flag1,i,prev,survive;
    for(i=6; i<= 32767; i++)
    {
        maxima= i;sum=0;flag=1;flag1=1;
        for(i=1; i<maxima; i++)
            child[i]=i+1;
        child[maxima]=1;prev=1;
        int g;
        while(1)
        {
            flag=1;
            child[prev]=child[child[prev]];
            if(child[prev]==prev)
            {
                survive=prev;
                if(survive==maxima)
                    sum=sum+(survive*2);
                else
                    sum=sum+(maxima-survive)+survivor[survive];
                maxima=survive;
                flag=0;
            }
            if(flag==0)
                break;
            prev=child[prev];
        }
        survivor[i]=sum;
    }
}
int main()
{
    survivor_finding();
    int n;
   // freopen("tasnim.txt","r",stdin);
    while(scanf("%d",&n)==1)
    {
        printf("%d\n",survivor[n]);
    }
    return 0;
}
