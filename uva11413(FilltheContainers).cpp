#include<bits/stdc++.h>
using namespace std;
bool check_it(int *ar, int assumed_size, int containers,int n )
{
    int c=assumed_size;
    int cont=1;
    while(n--)
    {
        if(*ar>assumed_size)
            return false;
        if(*ar>c)
        {
            if(cont==containers)return false;
            cont++;
            c=assumed_size;
        }
        c-= *ar ;
        ar++;
    }
    return true;
}
int main()
{
    int n,containers,low,high,mid,keeper,i;
    int arr[1001];
    while(scanf("%d%d",&n,&containers)==2)
    {
        for(i=0; i<n; i++)scanf("%d",&arr[i]);
        low=1,high=10000000,mid;
        while(low<=high)
        {
            mid=(low+high)/2;
            if(check_it(arr,mid,containers,n))
            {
                keeper = mid;
                high= mid-1;
            }
            else low=mid+1;
        }
        printf("%d\n",keeper);
    }
}
