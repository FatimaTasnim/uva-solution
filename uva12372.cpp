#include<iostream>
using namespace std;
int main()
{
    int T,l,w,h,c=1;
    cin>>T;
    while(T--)
    {
        cin>>l>>w>>h;
        if(l>20 || w>20 || h>20)
            cout<< "Case "<< c << ": bad"<<endl;
        else
            cout<< "Case "<< c << ": good"<<endl;
        c++;
    }
}
