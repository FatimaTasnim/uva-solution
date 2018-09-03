#include<bits/stdc++.h>
#define M 1000000
using namespace std;
//bool mark[M+2]={false};
int mark[M+2];
vector <int> prime;
void siv()
{
    for(int i=2;i*i<=M;i++)
        if(!mark[i])
        for(int j=i;j*i<=M;j++)
        mark[i*j]=true;
}
bool pln(int n)
{
    int a=n,r=0;
    while(n!=0)
    {
        r=r*10+n%10;
        n/=10;
    }
    if(a==r) return true;
    else return false;
}
int main()
{
    int a,r;
    siv();
    while(scanf("%d",&a))
    {
        r=a*2;
        printf("%d\n",r);
        //cout <<pln (a)<< "  " <<pln(r)<<"  ";
        if(!mark[a])
        {
            if(pln(a))
                break;
        }
    }
}
