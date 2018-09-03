#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum,i,c,mid;
    int arr[3001];
    scanf("%d",&c);
    while(c--)
    {
        scanf("%d",&n);
        sum=0;
        for(i=0; i<n; i++)
            scanf("%d",&arr[i]);
        sort(arr,arr+n);
        mid=n/2;
        mid= arr[mid];
        for(i=0; i<n; i++)
            sum += abs(mid-arr[i]);
        printf("%d\n",sum);
    }
    return 0;
}
