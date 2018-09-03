#include<iostream>
using namespace std;
int main()
{
    long int a;
    while(cin>>a)
    {
        if(a<0)
            break;
            if(a==1)
                cout<< "0%"<<endl;
            else
        cout<< a*25 <<"%"<<endl;
    }
    return 0;
}
