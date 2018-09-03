#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,flag,flag1,maxima,survive,sum,i,prev;
    int child[40000];
    while(scanf("%d",&n)==1)
    {
        maxima= n;
        sum=0;
        flag=1;
        flag1=1;
        while(1)
        {
           // cout<< maxima << endl;
            for(i=1;i<maxima;i++)
                child[i]=i+1;
                child[maxima]=1;
            prev=1;int g;
            while(1)
            {
                flag=1;
               // cout<< prev<< " " << child[prev] << " ";
                child[prev]=child[child[prev]];
               // cout<< g<<endl;
               //system("pause");
                if(child[prev]==prev)
                {
                    survive=prev;
                    if(survive==maxima)
                    {
                        sum=sum+(survive*2);
                        flag1=0;
                        //printf("yes %d ",sum);
                    }
                    else{
                        sum=sum+(maxima-survive);
                        //cout<<"\nsum " <<survive<< " " << maxima << " " << sum<<endl;
                    }
                    maxima=survive;
                    flag=0;
                }
                if(flag==0)
                    break;
                    prev=child[prev];
            }
            if(flag1==0)
                break;
        }
        printf("%d\n",sum);
    }
}
