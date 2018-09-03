#include<stdio.h>
#include<cstring>
char *strrev(char *str)
{
char *p1, *p2;

if (! str || ! *str)
return str;
for (p1 = str, p2 = str + strlen(str) - 1; p2 > p1; ++p1, --p2)
{
*p1 ^= *p2;
*p2 ^= *p1;
*p1 ^= *p2;
}
return str;
}
int main()
{
    char ch[1000],st[1000],st1[1000];
    string a;
}
