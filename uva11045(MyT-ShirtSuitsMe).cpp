#include<bits/stdc++.h>
#define PS system("pause")
using namespace std;
int main()
{
    int n,t_shirts,people,xxl,xl,l,m,s,xs,i,flag;
    string str,st;
    scanf("%d",&n);
    while(n--)
    {
        flag=1;xxl=xl=l=m=s=xs=0;
        scanf("%d",&t_shirts);
        t_shirts/=6;
        //cout<< t_shirts<<endl;
        scanf("%d",&people);
        for(i=0;i<people;i++)
        {
            cin>> str>>st;
            if(str=="XXL"||str=="XXL")
            {
                xxl++;
                if(xxl>t_shirts)
                    flag= 0;
            }
            else if(str=="XL"||str=="XL")
            {
                xl++;
                if(xl>t_shirts)
                    flag= 0;
            }
            else if(str=="L"||str=="L")
            {
                l++;
                if(l>t_shirts)
                    flag= 0;
            }
            else if(str=="M"||str=="M")
            {
                m++;
                if(m>t_shirts)
                    flag= 0;
            }
            else if(str=="S"||str=="S")
            {
                s++;
                if(s>t_shirts)
                    flag= 0;
            }
            else if(str=="XS"||str=="XS")
            {
                xs++;
                if(xs>t_shirts)
                    flag= 0;
            }
        }
        if(flag==1)printf("YES\n");
        else printf("NO\n");

    }
}
