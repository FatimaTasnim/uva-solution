#include<iostream>
#include<stdio.h>
#include<vector>
#include<algorithm>
#include<string.h>
using namespace std;
int main()
{
    int n,i,t,flag,j;
    cin>>t;
    cout<< "Lumberjacks:"<<endl;
    while(t--)
    {
        vector<int> mofij;
        vector<int> mokles;
        flag =0;
        for(i=0;i<10;i++)
        {
            cin>>n;
            mofij.push_back(n);
            mokles.push_back(n);
        }
        sort(mokles.begin(),mokles.end());
        for(i=0;i<10;i++)
        {
            if(mokles[i]!=mofij[i])
            {
                flag=1;
                break;
            }
        }
        if(flag==1){
                flag=0;
        for(i=9,j=0;i>=0;i--,j++)
        {
            if(mokles[i]!=mofij[j])
            {
                //cout<<mokles[i];
                flag=1;
                break;
            }
        }
        }

        if(flag==0)
            cout<< "Ordered"<<endl;
        else
            cout<< "Unordered"<<endl;
        mofij.erase(mofij.begin(),mofij.end());
        mokles.erase(mokles.begin(),mokles.end());
    }return 0;
}
//it's accepted :)..
