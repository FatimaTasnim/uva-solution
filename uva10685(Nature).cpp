#include<bits/stdc++.h>
#define MAX 5001
using namespace std;

int par[MAX],ara[MAX];

void fixing(int n)
{
    int i;
    for(i=0; i<=n; i++)
    {
        par[i]=i;
    }
}

int find(int n)
{
    if(par[n]==n)
        return n;

    return (par[n]=find(par[n]));

}

void beadob(int u,int v)
{
    int U,V;
    U = find(u);
    V = find(v);

    if(U!=V)
    {
        par[V]=U;
        ara[U]+=ara[V];

    }
}


int main()
{

    map<string,int>tasnim;

    string s1,s2,s3;

    int n,r,i,j,k,cnt,arr1[MAX],arr2[MAX],p=0;

    while(scanf("%d%d",&n,&r)==2)
    {
        if(n==0 && r==0)
            break;
        fixing(n);

        for(i=0; i<n; i++)
        {
            ara[i]=1;
        }

        for(i=0; i<n; i++)
        {
            cin>>s1;
            tasnim[s1]=i;
        }

        for(j=0; j<r; j++)
        {
            cin>>s2>>s3;

            int x = tasnim[s2];
            int y = tasnim[s3];

            beadob(x,y);

        }

        int count,a[MAX],maximum;

        maximum = 0;

        for(j=0; j<n; j++)
        {

            if(ara[j]>maximum)
                maximum= ara[j];
        }


        printf("%d\n",maximum);
    }

    return 0;
}
