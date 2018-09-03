#include<iostream>
#include<cstring>
#include<stdio.h>
#include<string.h>
#include<ctype.h>
using namespace std;
int main()
{
    long int t,p,i,j,flag;
    string c[100000];
    while(scanf("%ld",&t)==1){
    while(t--)
    {
        flag=0;
       scanf("%ld",&p);
       for(i=0;i<p;i++)
       {
           cin>>c[i];
       }
       //cout<<c[1][0];
       for(i=0;i<p-1;i++)
       {
           for(j=0;c[i][j];j++);
           //printf("%c %c\n",c[i][j],c[i+1][j]);
          if(c[i][j-1]!=c[i+1][0])
          {
              //cout<<c[i][j-1]<<endl<<c[i+1][0]<<endl;
              flag=1;break;
          }
       }
       if(flag==0)
       printf("Ordering is possible.\n");
       else
        printf("The door cannot be opened.\n");
    }
    }return 0;
}
//not yet solved :(
