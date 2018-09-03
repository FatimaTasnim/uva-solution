#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    long long A,sum,i,N;
    int flag;
    cin>>N;
    while(N--)
    {
        cin>> A;
        sum=0;flag=0;
        for(i=1;;i++)
        {
            if(A<sum)
            {
                flag=1;
                break;
            }
            else if(A==sum)
                break;
                sum+=i;
        }
        if(flag==1)
            cout<< i-2<<endl;
        else
            cout<< i-1<<endl;
    } return 0;
}
