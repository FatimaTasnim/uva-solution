#include<bits/stdc++.h>
using namespace std;
struct blah
{
    long long mX;
    long long mN;
    long long dF;
} ;

struct blah goltu(long long poltu)
{
    struct blah blah_t;
    vector <long long> number,zero;
    long long demo,minima=0,maxima=0;
    int i,j;
    while(poltu!=0)
    {
        if(poltu%10==0)
            zero.push_back(0);
        else
            number.push_back(poltu%10);
        poltu/=10;
    }
    sort(number.begin(),number.end());
    int r=number.size();
    if(zero.size()==0)
    {
        for(i=0;i<r;i++)
        minima=minima*10+number[i];
        demo=minima;
        while(demo!=0)
        {
            maxima=maxima*10+demo%10;
            demo/=10;
        }
    }
    else
    {
        minima=number[0];
        for(i=0;i<zero.size();i++)
            minima=minima*10;
        for(i=1;i<r;i++)
            minima=minima*10+number[i];
        for(j=r-1;j>=0;j--)
            maxima=maxima*10+number[j];
        for(i=0;i<zero.size();i++)
            maxima*=10;
    }
    blah_t.mX=maxima;
    blah_t.mN=minima;
    blah_t.dF=maxima-minima;
    return blah_t;
}
int main()
{
    long long n;
    struct blah blah_p;
    while(scanf("%lld",&n)==1)
    {
        blah_p=goltu(n);
        printf("%lld - %lld = %lld = 9 * %lld\n",blah_p.mX,blah_p.mN,blah_p.dF,blah_p.dF/9);
    }
    return 0;
}
