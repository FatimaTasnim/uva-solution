#include<iostream>
using namespace std;
int main()
{
    int t,c=1,N,K,P,countn,player;
    cin>>t;
    while(t>=c)
    {
        cin>>N>>K>>P;
        cout<< "Case "<<c<< ": ";
        if(N==P)
            player=K;
        else if(N>P)
        {
           countn=N%P;
           if(countn==0)
            countn--;
           player=K-countn;
           if(player==0)
            player=N;
        }
        else
        {
            countn=P%N;
            player=K+countn;

        }

        cout<<player<<endl;
        c++;
    }return 0;

}
