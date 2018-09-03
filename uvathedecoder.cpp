#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    char str[2000];
    while(gets(str))
    {
        for(int i=0;str[i];i++)
          printf("%c",str[i]-7);
          printf("\n");
    }
    return 0;
}

