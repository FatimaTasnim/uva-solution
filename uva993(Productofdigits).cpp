#include<bits/stdc++.h>
using namespace std;
int main()
{
    int g,i,n;
    vector<int> vc;
    //freopen("test.txt","r",stdin);
    //freopen("test1.txt","w",stdout);
    scanf("%d",&g);
    while(g--){
        scanf("%d",&n);
        if(n<10)
            printf("%d\n",n);
        else{
        for(i=9;i>=2;i--){
            while(n%i==0){
                n/=i;
                vc.push_back(i);
            }
        }
        if(n!=1)
            printf("-1\n");
        else{
            sort(vc.begin(),vc.end());
            for(i=0;i<vc.size();i++)
                printf("%d",vc[i]);
            printf("\n");
        }
        vc.clear();
        }
    }
}
