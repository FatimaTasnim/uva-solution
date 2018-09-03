#include<iostream>
using namespace std;
int main()
{
    int K,m,n,x,y;
    while(cin >> K)
    {
        if(K==0)break;
        cin>> m >> n;
        while(K--)
        {
            cin>> x >> y;
            if(x==m || y==n)
                cout<< "divisa" << endl;
            else if(x<m && y > n)
                cout<< "NO" << endl;
            else if(x>m && y>n)
                cout<< "NE" <<endl;
            else if(x<m && y<n)
                cout<< "SO" << endl;
            else
                cout<< "SE" << endl;
        }
    }
    return 0;
}
