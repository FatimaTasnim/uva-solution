#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[100];
    int n,k=0,sum=0,w,i;
    scanf("%d",&n);
    getchar();
    while(n--)
    {
       gets(a);
       if(a=="report")
        cout  <<k<< endl;
    else{
        for(i=7;a[i];i++){
         w=a[i]-48;
         sum=sum*10+w;
       }
       k+=sum;

    }
    }
}
