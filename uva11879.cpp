#include<iostream>
#include<math.h>
#include<string.h>
#define M 17
#define i long long
using namespace std;
int F(char * p,int l)
{
    int n=0; int c=(p[l-1]-48)%M;
    int d=0;
    while(d<l-1)
    {
        n=(((n*10)%M)+(p[d]-48)%M)%M;
        d++;
    }
    int g=n-(5*c);
    if(g<0)g*=-1;
    if(g%17==0)
        return 1;
    else return 0;
}
int main()
{
    char str[1000];

    while(cin>>str)
    {
        if(str[0]=='0')break;
        int l=strlen(str);
        cout<< F(str,l)<<endl;
    }
    return 0;
}
