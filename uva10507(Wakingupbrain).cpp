#include<bits/stdc++.h>
using namespace std;
map<string,bool> mark;
map<string,int>sum;

int main()
{
    int n,m,year,prev,hey,valobasha,flag;
    string t1,t2,t3,demo;
    while(scanf("%d%d",&n,&m)==2)
    {
        string a[100000],b[100000];
        hey=0;
        cin>>t1;
        for(int j=0; t1[j]; j++)
        {
            string g;
            g+=t1[j];
            mark[g]=true;
        }
        year=prev=0;
        for(int i=0; i<m; i++)
        {
            cin>>demo;
            a[i]+=demo[0];
            b[i]+=demo[1];
        }
        while(1)
        {
            map<string,int>sum;
            string temp,c;
            flag=0;
            for(int i=0; i<m; i++)
            {
                if(!mark[a[i]] && mark[b[i]])
                {
                    sum[a[i]]++;
                    if(sum[a[i]]==3)
                    {
                        flag=1;
                        temp+=a[i];
                        hey++;
                    }
                }
                if(!mark[b[i]] && mark[a[i]])
                {
                    sum[b[i]]++;
                    if(sum[b[i]]==3)
                    {
                        flag=1;
                        temp+=b[i];
                        hey++;

                    }
                }
            }
            if(flag==1)
            {
                year++;
            }
            for(int i=0; i<temp.size(); i++)
            {
                string c;
                c+=temp[i];
                mark[c]=true;
            }
            if(flag==0)break;

        }

        valobasha=n-t1.size();
        if(hey==valobasha)
            printf("WAKE UP IN, %d, YEARS\n",year);
        else
            printf("THIS BRAIN NEVER WAKES UP\n");
        mark.clear();
    }
}
