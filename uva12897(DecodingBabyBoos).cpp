#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str,st;
    char ch1,ch2;
    int t,p;
    scanf("%d",&t);
    while(t--)
    {
        cin>> str;
        st="ABCDEFGHIDKLMNOPQRSTUVWXYZ";
        scanf("%d",&p);
        getchar();
        for(int i=0;i<p;i++)
        {
            scanf("%c %c",&ch1,&ch2);
            getchar();
            for(int j=0;st[j];j++)
            {
                if(st[j]==ch2)
                    st[j]=ch1;
            }
        }
        for(int i=0;str[i];i++)
        {
            if(str[i]!='_')
            printf("%c",st[str[i]-'A']);
            else
                printf("_");
        }
        printf("\n");
    }
}
