#include<bits/stdc++.h>
#define INF 1000000
#define SIZE 1000
int a[SIZE+1],l[SIZE+1],r1[SIZE+1],i,j,temp_BBL,key,com=0,tom=0,k;
using namespace std;
void MARGE(int p,int q,int r)
{
    int n1=q-p+1;
    int n2=r-q;
    for(i=1;i<=n1;i++)
    {
        l[i]=a[p+i-1];
    }
    for(j=1;j<=n2;j++)
    {
        r1[j]=a[q+j];
    }
    l[n1+1]=INF;
    r1[n2+1]=INF;
    i=j=1;
    for(k=p;k<=r;r++)
    {
        if(l[i]<=r1[j])
        {
            a[k]=l[i];
            i++;
        }
        else
        {
            a[k]=r1[j];
            j++;
        }
    }
}
void MARGE_SORT(int p,int r)
{
    int q;
    if(p<r)
        q=(p+r)/2;
    MARGE_SORT(p,q);
    MARGE_SORT(q+1,r);
    MARGE(p,q,r);
}
int main()
{
    int b[101],a[101];
    srand(time(NULL));
    for(i=1; i<=100; i++)
    {
        a[i]=rand()%100;
        //cout<< a[i]<<" ";
        b[i]=a[i];
    }
    printf("Generating random input set ... DONE\n\n");
MARGE_SORT(1,50);
}
