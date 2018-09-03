#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int N,l1,l2,l3,sum;
    while(scanf("%d",&N)==1)
    {
        while(N--)
        {
            cin>>l1>>l2>>l3;
            sum=0;
            if(l1>l2 && l1>l3)
            {
                if(l2+l3>l1) sum=1;
            }
            else if(l2>l1 && l2>l3)
            {
                if(l1+l3>l2) sum=1;
            }
            else if(l3>l2 && l3>l1)
            {
                if(l2+l1>l3) sum=1;
            }
            if(sum==1)
                cout<< "OK"<<endl;
            else
                cout<< "Wrong!!"<<endl;
        }
    }return 0;
}
