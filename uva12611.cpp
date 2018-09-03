#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int T,c=1;
    cin>>T;
    while(T--)
    {
        int r;
        cin>>r;
        int len=r*5;
        int width=(len*60)/100;
        int p1x=(45*len/100);int p1y=width/2;
        int p2x=(55*len/100);
        cout<< "Case " << c<< ":"<<endl;
        cout<<"-" << p1x<< " " <<p1y<<endl;
        cout<<p2x<< " " <<p1y<<endl;
        cout<<p2x<< " -" <<p1y<<endl;
        cout<<"-" << p1x<< " -" <<p1y<<endl;
        c++;
    }return 0;
}
