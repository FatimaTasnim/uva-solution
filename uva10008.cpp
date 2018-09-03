#include<iostream>
#include<stdio.h>
#include<string.h>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    int n,i,motu;
    //int vv[] = {0};
    vector<int> patlu;
    for(i=0;i<26;i++)
        patlu.push_back(0);
//    patlu={0};
    char a[1000];
    scanf("%d",&n);
    getchar();
    motu=0;
    while(n--)
    {
        gets(a);
        for(i=0;a[i];i++)
        {
            if(a[i]>='a' && a[i]<='z')
                a[i]-=32;
            if(a[i]>='A' && a[i]<='Z')
            patlu[a[i]-64]++;
        }
    }
    for(i=1;i<=26;i++)
    {
       if(patlu[i]>motu)
            motu=patlu[i];
    }
    while(motu>0){
    for(i=1;i<26;i++)
    {
        if(patlu[i]==motu)
            printf("%c %d\n",i+64,motu);
    }
    motu--;

    }
    return 0;
}
