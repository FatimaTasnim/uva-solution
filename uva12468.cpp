#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a,b,c;
    while(true){
    cin>>a>>b;
    if(a==-1 && b==-1)
        break;
    c=abs(a-b);
    if(c>50)
        c=100-c;
    cout<<c<<endl;
    }
    return 0;
}
