#include<bits/stdc++.h>
#define M 1000000
using namespace std;
bool mark[M+2];
vector <int> prime;
map <int,int> dis;
map <int,int> miss;

void siv()
{
    int prev;
    for(int i=2; i*i<=M; i++)
        if(!mark[i])
            for(int j=i; j*i<=M; j++)
                mark[i*j]=true;
    prime.push_back(2);
    prev=2;
    for(int i=3; i<=M; i++)
        if(!mark[i])
        {
            prime.push_back(i);
            dis[prev]=i-prev;
            prev=i;
        }
}
int main()
{
    siv();
    int n,a,b,flag,i,l;
    scanf("%d",&n);
    while(n--)
    {
        flag=0;
        scanf("%d%d",&a,&b);
        for(i=a; i<b; i++)
        {
            if(dis[i]!=0)
            {
                miss[dis[i]]++;
            }
        }
        for(i=a; i<b; i++)
        {
            //printf("%d %d\n",miss[dis[i]],dis[i]);
            if(i==miss[dis[i]])
            {
                l=i;
                cout<<l<<endl;
                flag=1;
                break;
            }
        }
        cout<< flag<<endl;
        if(flag==1)
            printf("The jumping champion is %d\n",l);
        else
            printf("No jumping champion\n");
        miss.clear();
        //dis.clear();
    }
}
