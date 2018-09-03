#include<bits/stdc++.h>
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
char *  sum(char * a, char * b)
{
    int i, j=0, k, jogfol, haate_thake=0,l1,l2;
    char s[1000+2];
    char sum[1000];
    l1=strlen(a);l2=strlen(b);
    if(l1==l2)
        {
            for(i=l1-1; i>=0; i--)
                {
                    jogfol=haate_thake+(a[i]-'0')+(b[i]-'0');
                    if(jogfol<10)
                        {
                            s[j++]=jogfol+'0';
                            haate_thake=0;
                        }
                    else
                        {
                            s[j++]=(jogfol%10)+'0';
                            haate_thake=jogfol/10;
                        }
                }
        }
    else if(l1<l2)
        {
            for(i=l1-1, k=l2-1; i>=0; i--, k--)
                {
                    jogfol=haate_thake+(a[i]-'0')+(b[k]-'0');
                    if(jogfol<10)
                        {
                            s[j++]=jogfol+'0';
                            haate_thake=0;
                        }
                    else
                        {
                            s[j++]=(jogfol%10)+'0';
                            haate_thake=jogfol/10;
                        }
                }

            for(i=k; i>=0; i--)
                {
                    jogfol=haate_thake+(b[i]-'0');
                    if(jogfol<10)
                        {
                            s[j++]=jogfol+'0';
                            haate_thake=0;
                        }
                    else
                        {
                            s[j++]=(jogfol%10)+'0';
                            haate_thake=jogfol/10;
                        }
                }

        }
    else
        {
            for(i=l2-1, k=l1-1; i>=0; i--, k--)
                {
                    jogfol=haate_thake+(a[k]-'0')+(b[i]-'0');
                    if(jogfol<10)
                        {
                            s[j++]=jogfol+'0';
                            haate_thake=0;
                        }
                    else
                        {
                            s[j++]=(jogfol%10)+'0';
                            haate_thake=jogfol/10;
                        }
                }

            for(i=k; i>=0; i--)
                {
                    jogfol=haate_thake+(a[i]-'0');
                    if(jogfol<10)
                        {
                            s[j++]=jogfol+'0';
                            haate_thake=0;
                        }
                    else
                        {
                            s[j++]=(jogfol%10)+'0';
                            haate_thake=jogfol/10;
                        }
                }
        }

    if(haate_thake!=0)
        s[j++]=haate_thake+'0';

    s[j]='\0';
    strrev(s);
    strcpy(sum,s);
    return sum;
}
int main()
{
    char fibonacci[5000][1000],a[1000],b[1000];
    int i;
    strcpy(fibonacci[1],"1");
    strcpy(fibonacci[2],"2");strcpy(a,"2");
    strcpy(fibonacci[3],"3");strcpy(b,"3");
    for(i=4;i<=50;i++)
    {//cout<<"h"<<" ";
       strcpy(fibonacci[i],sum(a,b));
       // strrev(fibonacci[i]);
       strcpy(a,fibonacci[i]);
       strcpy(b,fibonacci[i-1]);
    }
    int n;
   while(scanf("%d",&n))
    {
        if(n==0)break;
       printf("%s\n",fibonacci[n]);
    }
    //cout<<sum("1000","200")<<" ";

    //cout<< sum(a,b);
}

