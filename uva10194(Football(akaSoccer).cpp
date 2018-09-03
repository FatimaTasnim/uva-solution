#include<bits/stdc++.h>
using namespace std;
char * system_in(char * a ,char * b)
{
    //char b[31];
    int i;
    for(i=0;a[i]!='@';i++)
    {
        b[i]=a[i];
    }
    b[i]='\0';
    cout<< b<<endl;
    return b;
}
int main()
{
    char str[100],st[31];
    int a,b;
    while(gets(str))
    {
        cout<< system_in(str,st)<<endl;
    }
}
