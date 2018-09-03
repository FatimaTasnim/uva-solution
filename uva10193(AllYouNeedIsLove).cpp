#include<bits/stdc++.h>
using namespace std;
char a[32], b[32];
unsigned int n,i,k,w,x,y;
char len1, len2, it;
int gcd(unsigned int x,unsigned y)
{
    while(y)
        y^=x^=y^=x%=y;
    return x;
}
int main(void)
{
    scanf("%u\n",&n);
    for(i = 0; i != n;)
    {
        i++;
        gets(a);
        gets(b);
        for(x = 0,w = 1, it = strlen(a); it; it--)
            x += w*(a[it-1]-'0'),w*=2;
        for(y = 0,w = 1, it = strlen(b); it; it--)
            y += w*(b[it-1]-'0'),w*=2;
        if(y>x) k = gcd(x,y);
        else k = gcd(y,x);
        if(k!=1) printf("Pair #%u: All you need is love!\n",i);
        else printf("Pair #%u: Love is not all you need!\n",i);
    }
    return 0;
}
