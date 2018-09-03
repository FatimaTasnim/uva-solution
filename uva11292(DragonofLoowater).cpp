#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,sum,ok,i,a,k;
    vector<int> dragon_head, knights;
    while(scanf("%d%d",&n,&m)){
         if(n==m && m==0)break;
         ok=sum=k=0;
            for(i=0;i<n;i++)
            {
                scanf("%d",&a);
                dragon_head.push_back(a);
            }
            sort(dragon_head.begin(),dragon_head.end());
            for(i=0;i<m;i++)
            {
                scanf("%d",&a);
                knights.push_back(a);
            }
            sort(knights.begin(),knights.end());
            for(i=0;i<n;i++){
                while(k<m){
                       // cout <<0<< " " ;
                if(dragon_head[i]<=knights[k]){
                    sum+=knights[k];k++;ok++;
                    //cout <<"hm" << knights[k] << endl;
                    break;
                }
                k++;
                }
            }
            if(ok==n)
                    printf("%d\n",sum);
                else printf("Loowater is doomed!\n");
                    dragon_head.clear();
                knights.clear();
}
}
