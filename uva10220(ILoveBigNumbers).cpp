#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,k,m,n,carry,calc,arr[10000],r,sum;
    while(scanf("%lld",&n)!=EOF)
    {
        r=n;
        sum=carry=0;
        arr[0]=1;
        m=1;
        for(i=1;i<=n;i++)
        {
            for(j=0;j<m;j++)
            {
                calc=(arr[j]*i)+carry;
                arr[j]=calc%10;
                carry=calc/10;
            }
            while(carry>0)
            {
                arr[m]=carry%10;
                carry/=10;
                m++;
            }
        }
        //printf("%lld!\n",r);
        for(i=m-1;i>=0;i--)
        {
            //printf("%lld",arr[i]);
            sum+= arr[i];
        }
        printf("%lld\n",sum);
    }
    return 0;
}

