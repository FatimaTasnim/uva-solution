#include<iostream>
#include<math.h>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    long int T,i=0,j,total,a,k,power;
    cin>>T;
    while(T>i)
    {
        vector<long int> amount_rate;
        total=0;
        while(true){
        cin>>a;
        if(a==0)break;
        amount_rate.push_back(a);}
        sort(amount_rate.begin(),amount_rate.end());
        for(j=amount_rate.size()-1,k=1;j>=0;j--,k++)
        {
            cout<< "rate"<<amount_rate[j]<< " ";
            power=pow(amount_rate[j],k);
            cout<< "power:"<<power<<endl;
            cout<<total<<endl;
            total+=power*2;
        }
        if(total>5000000)
            cout<< "Too expensive"<<endl;
        else
            cout<<total<<endl;
        amount_rate.erase(amount_rate.begin(),amount_rate.end());

        i++;
    }
    return 0;
}
// it's accepted.. :)
