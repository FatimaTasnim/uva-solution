#include<bits/stdc++.h>
using namespace std;
char f[10000];
char factorial[10000];
int counts[10];

char * multiply(int k){
    int carry,sum,i;
    int len = strlen(f);
    carry=0;
    i=0;
    while(i<len){
        sum=carry+(f[i] - '0') * k;
        f[i] = (sum % 10) + '0';
        i++;
        carry = sum/10;
    }
    while(carry>0){
        f[i++] = (carry%10) + '0';
        carry/=10;
    }
    f[i]='\0';
   for(int j=0;j<i;j++)
       factorial[j]=f[j];
    factorial[i]='\0';
return factorial;
}char sum [10000];
char * add(char *st)
{int s;
    int l=strlen(st),carry=0,i;
    for(i=0;st[i];i++)
    {
        s=sum[i-'0']+st[i-'0']+carry;
        carry=0;
        sum[i]=s%10;
        carry=s/10;
    }
    while(carry!=0)
    {
        s=sum[i-'0']+carry;
        carry=0;
        sum[i]=s%10;
        carry=s/10;i++;
    }return sum;
}
int main()
{
    int n,a,i;
    char multy[10000],final_[10000];
    while(scanf("%d%d",&n,&a))
    {
        for(int j=1;j<=n;j++)
        {
            for(i=1;i<=a;i++)
            {
                multy,multiply(a);
            }
            strcpy(final_,add(multiply(j)));
        }
    }
    printf("%s\n",final_);
}
