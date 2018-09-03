#include<bits/stdc++.h>
using namespace std;
int coins[101];
int coin[101][101];
int Coin_change(int sz,int total)
{
    int i,j;
    for(j=1;j<=sz;j++)
    {
        for(i=1;i<=total;i++)
        {
            coin[0][i]=i+1;
            if(coins[j]<=i){
                coin[j][i]= min((coin[j][i-coins[j]]+1),coin[j-1][i]);
            }
            else coin[j][i]=coin[j-1][i];
            //cout << coin[j][i] << " ";
           // if(i>=total && coin[j][i]!=0)
                //break;
        }
       // cout << endl;
    }
    return coin[sz][total];
}
int main()
{
    int n,sz,total,i,j;
    cin>> sz >> total;
    for(i=1;i<=sz;i++)
        cin>> coins[i],coin[i][0]=0;
    cout << Coin_change(sz,total) << endl;
}

