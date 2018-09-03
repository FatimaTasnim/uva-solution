#include<iostream>
#include<stdio.h>
#include<vector>
#include<algorithm>
#include<string.h>
using namespace std;
int main()
{
    string a;
    int x[10],t,c;
    while(scanf("%d",&t)==1){
            c=1;
        while(t>=c)
    {
            int i,max=0;
            vector<string> google;
            for(i=0;i<10;i++)
            {
                cin>> a;
                google.push_back(a);
                cin>> x[i];
                if(x[i]>max)
                    max=x[i];
            }
            cout<< "Case #"<<c<< ":"<<endl;
            for(i=0;i<10;i++)
            {
                if(x[i]==max)
                cout<<google[i]<<endl;
            }
            google.erase(google.begin(),google.end());
c++;
        }
        }return 0;
}
// this is a total correct version :)
