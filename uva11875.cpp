#include<iostream>
#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int a,T,n,i,t,C=1;
    scanf("%d",&T);
    while(T>=C)
    {
        vector<int> brick;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>a;
            brick.push_back(a);
        }
        sort(brick.begin(),brick.end());
        t=n/2;
        //cout<<t;
        cout<<"Case "<<C<<": "<<brick[t]<<endl;
        brick.erase(brick.begin(),brick.end());
        C++;
    }return 0;
}
