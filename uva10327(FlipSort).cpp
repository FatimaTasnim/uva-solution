#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum,temp;
    while(scanf("%d",&n)==1){sum=0,temp;
    int arr[2000];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=1;i<n;i++)
    {
        for(int j=n-1;j>=i;j--)
        {
            if(arr[j-1]>arr[j]){
                temp=arr[j-1];
            arr[j-1]=arr[j];
            arr[j]=temp;
            sum++;}
        }
    }
    printf("Minimum exchange operations : %d\n",sum);
    }
}
