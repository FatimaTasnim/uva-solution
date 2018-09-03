#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char a[21];
    int i,gain=0;
    while(cin>>a)
    {
        gain=0;
        for(i=0;a[i];i++)
        {
            if(a[i]=='B' || a[i]=='F' || a[i]=='P' || a[i]=='V')
            {
                if(gain!=1)
                    cout<< "1";
                gain=1;
            }
            else if(a[i]=='C' || a[i]=='G' || a[i]=='J' || a[i]=='K' || a[i]=='Q' || a[i]=='S' || a[i]=='X' || a[i]=='Z')
                {
                if(gain!=2)
                    cout<< "2";
                gain=2;
            }
            else if(a[i]=='D' || a[i]=='T')
                {
                if(gain!=3)
                    cout<< "3";
                gain=3;
            }
            else if(a[i]=='L')
                {
                if(gain!=4)
                    cout<< "4";
                gain=4;
            }
            else if(a[i]=='M' || a[i]=='N')
                {
                if(gain!=5)
                    cout<< "5";
                gain=5;
            }
            else if(a[i]=='R')
                {
                if(gain!=6)
                    cout<< "6";
                gain=6;
            }
            else
                gain=0;
        }
        cout<<endl;
    }
return 0;
}
