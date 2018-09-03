#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c,k=1,i,j,start,end_,sum,flag;
    int arr[101][101];
    while(scanf("%d",&n))
    {
        start=1;
        end_=n;
        if(n==0)break;
        for(i=1; i<=n; i++)
            for(j=1; j<=n; j++)
                scanf("%d",&arr[i][j]);
        printf("Case %d: ",k++);
        flag=0;
        while(end_-start>=0)
        {
            sum=0;
            for(i=start; i<end_; i++)
            {
                sum+= arr[start][i];
                sum+= arr[i][end_];
            }

            //sum-= arr[start][end_];
            for(i=start+1; i<end_; i++)
            {
                sum+= arr[i][start];
                sum+= arr[end_][i];
            }
            if(end_!=start)
            sum+= arr[end_][end_]+arr[end_][start];
            else sum+= arr[end_][end_];
            if(flag==1)printf(" ");
            flag=1;
            printf("%d",sum);
            start++;
            end_--;
        }
        printf("\n");
    }
}
