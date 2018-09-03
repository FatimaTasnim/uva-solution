#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[1000005],a[1000005];
        int max=1;
    while(scanf("%s",s))
    {
        if(!strcmp(s,"E-N-D"))
        break;
        int l=strlen(s);
        int c=0;
        for(int i=0;i<l;i++)
        {
            if(s[i]>='a'&&s[i]<='z'||s[i]>='A'&&s[i]<='Z'||s[i]=='-')
            continue;
            else
            c++;
        }
        l=l-c;
        if(max<l){
            max=l;
            strcpy(a,s);
        }
    }
    int l=strlen(a);
    for(int i=0;i<l;i++)
    {
    if(a[i]>='A'&&a[i]<='Z')
    printf("%c",a[i]+32);
    else if(a[i]>='a'&&a[i]<='z'||a[i]=='-')
    printf("%c",a[i]);
    }
    printf("n");
    return 0;
}
