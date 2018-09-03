#include<iostream>
#include<string.h>
#include<stdio.h>
#include<math.h>
using namespace std;

int main()
{
    int a,b,c,d,e,f,g;
    char word[10004];
    cin>>f;
    getchar();
    for(int i=0;i<f;i++)
    {
        gets(word);
        e=strlen(word);
        g=sqrt(e);
        c=g*g;
        if(c!=e)
        {
            cout<<"INVALID";
        }
        else
        {
            for(a=0;a<g;a++)
            {
                for(b=a;b<e;b+=g)
                {
                    printf("%c",word[b]);
                }
            }
        }
        cout<<endl;
    }
    return 0;
}
