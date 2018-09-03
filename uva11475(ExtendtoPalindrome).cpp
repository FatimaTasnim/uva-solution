#include<bits/stdc++.h>
#define prime 100010861
using namespace std;
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
void search_string(char *pat){
    long long M,hash_p,hash_t,keep_track,base,base1;
    int i,j;
    base1=1,base=10001093;
M=strlen(pat);
hash_p=hash_t=0;
//cout << txt << " " << pat << endl;

 for (i = M-1; i >=0; i--)
    {
        hash_p = (base*hash_p + pat[i])%prime;
        hash_t = (hash_t + pat[i]*base1)%prime;
        if(hash_p==hash_t){
            keep_track=M-i;
           }
            base1= (base*base1)%prime;
    }
for(i=0;pat[i];i++)
    printf("%c",pat[i]);
for(i=(M-keep_track)-1;i>=0;i--)
    printf("%c",pat[i]);
printf("\n");
}
int main()
{
    char str[100001];
    while(scanf("%s",str)==1){
        //strcpy(st,str);
        //strrev(st);
        search_string(str);
    }
}
