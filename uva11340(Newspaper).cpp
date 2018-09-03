#include<bits/stdc++.h>
using namespace std;
int main()
{
    int c,n,m,rt;
    double sum=0.0;
    char ch;
    char line[10001];
    scanf("%d",&c);
    while(c--)
    {
        int amount[1500]={0};
        sum=0.0;
        scanf("%d",&n);
        getchar();
        for(int i=0;i<n;i++)
        {
            scanf("%c%d",&ch,&rt);
            getchar();
            //cout<<"ch"<< ch<< " rt"<<rt<<endl;
            amount [ch]=rt;
        }
        scanf("%d\n",&m);
        getchar();
        for(int j=1;j<=m;j++)
        {
            gets(line);
            int len=strlen(line);
                for(int d=0;d<len;d++)
                {
                    sum+=amount[line[d]];
                }
        }
printf("%.2lf$\n",sum/100.0);
    }
}
// bug :/
