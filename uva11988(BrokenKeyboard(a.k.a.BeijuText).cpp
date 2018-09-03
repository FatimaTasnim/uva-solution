#include<bits/stdc++.h>
using namespace std;
int main()
{
    char st[1000000];
    int i;
    while(scanf("%s",&st)==1)
    {
        list <char> golu;
        list <char>:: iterator it =golu.begin();
        for(i=0;st[i];i++)
        {
            if(st[i]=='[')it=golu.begin();
            else if(st[i]==']')it=golu.end();
            else golu.insert(it,st[i]);
        }
        for(it= golu.begin();it!=golu.end();it++)
            printf("%c",*it);
        printf("\n");
    }
}
