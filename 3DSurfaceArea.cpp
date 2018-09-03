#include<bits/stdc++.h>
using namespace std;
int arr[105][105];
int main()
{
    int n,i,j,cnt=0, m;
    cin>> n >> m;
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
                cin>> arr[i][j];
        }
    }

    for(i=1;i<=n+1;i++){
        for(j=1;j<=m+1;j++){
            cnt+= abs(arr[i][j] - arr[i][j-1]);
           // cout << i << " " << j << " " << arr[i][j] << " " << arr[i][j-1] << " "<< abs(arr[i][j] - arr[i][j-1]) << endl;
        }
    }

    for(i=1;i<=n+1;i++){
        for(j=1;j<=m+1;j++){
            cnt+= abs(arr[i][j] - arr[i-1][j]);
        }
    }
    cout << cnt + ((n*m)*2) << endl;
}
