#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,n, m, point;
    int arr[11], res[505];
    char str[11];
    while(scanf("%s%d",&str,&m)==2){
        n = strlen(str);
        point = 0;
        while(point<n && str[point]!='.')point++;
        k = 1;
        for(i=n-1;i>point;i--,k++)arr[k] = res[k] = str[i]-48;
        for(i=point-1;i>=0;i--,k++)arr[k] =res[k] = str[i]-48;
        n = k-1;
        memset(res+n+1, 0, sizeof res);
        for(i=1;i<=n;i++)cout << arr[i] ;
        cout << endl;
        while(!res[k])k--;
        while(k>=1)cout << res[k--];
        cout << endl;
    }
}
