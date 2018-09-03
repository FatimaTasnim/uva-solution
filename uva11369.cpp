#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int i,j,t,temp,n,sum,N;
   vector<int>discount;
   cin>>t;
    while(t--)
    {
        sum=0;
        cin>>n;
        for(j=0;j<n;j++)
        {
            cin>>temp;
            discount.push_back(temp);
        }
       sort(discount.begin(),discount.end());
       N=discount.size();
      for(int i = N - 3;i >= 0;i -= 3)
            sum += discount[i];
       cout<<sum<<endl;
       discount.erase(discount.begin(),discount.end());
    }
    return 0;
}
