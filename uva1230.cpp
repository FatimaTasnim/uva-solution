#include<iostream>
#include<math.h>
#define i long long
using namespace std;
i M;
i F(i n,i p)
{
    if(p==0)
        return 1;
    else if(p%2==0)
    {
        i ret=F(n,p/2);
        return ((ret%M *ret%M)%M);
    }
    else return (((n%M)*F(n,p-1)%M)%M);
}
int main()
{
    i n,p,d;
    while(cin>>d){
            if(d==0)break;
    while(d--){
    cin>> n>>p>>M;
    cout <<F(n,p)<<endl;
    }
    }
return 0;
}


