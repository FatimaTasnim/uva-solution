#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int n,value,final_cost,sum,i,sum1;
    while(true){
            vector<int> cost;
    cin>>n;
    if(n==0)
        break;
        //sum=0;
        //sum1=0;
    for(i=0;i<n;i++)
    {
        cin>>value;
        cost.push_back(value);
    }

    sort(cost.begin(),cost.end());
    //for(i=0;i<n;i++)
        //cout<< cost[i]<<" ";
    //cout<<endl;
    sum=cost[0]+cost[1];
    sum1=sum;
    for(i=2;i<n;i++)
    {
        sum+=cost[i];
        sum1+=sum;
    }
    cout<<sum1<<endl;
    cost.erase(cost.begin(),cost.end());
    }
    return 0;
}
// its not correct version..

