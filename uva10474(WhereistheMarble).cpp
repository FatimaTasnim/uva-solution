#include<bits/stdc++.h>
using namespace std;
int main(){
int n,m,q,raju,num,i,j,f,l,mid,ans,c=1,flag;
vector<int>meena;
freopen("test.txt","r",stdin);
freopen("test1.txt","w",stdout);
while(1){
        //ans=-1;
    scanf("%d%d",&n,&q);
    if(n==q && q==0)break;
    printf("CASE# %d:\n",c++);
    for(j=0;j<n;j++){
        scanf("%d",&num);
        meena.push_back(num);
    }
    sort(meena.begin(),meena.end());
    for(i=0;i<q;i++){
            flag=0,ans=-1;
        scanf("%d",&raju);
        f=1,l=n;
        mid=(f+l)/2;
        while(f<=l){
       // cout << mid << " " << meena[mid-1]<<endl;
       // system("pause");
            if(meena[mid-1]<raju)
            f=mid+1;
            if(meena[mid-1]>raju)
                l=mid-1;
            if(meena[mid-1]==raju){
                    if(meena[mid-2]<raju||mid==1){
                    ans=mid;
                    break;
                    }
                    else mid--,flag=1;
                }
                //cout << f << "  " << l << endl;
                if(flag==0)
                mid=(f+l)/2;
        }
        if(ans<0)
            printf("%d not found\n",raju);
        else printf("%d found at %d\n",raju,ans);
    }
    meena.clear();
}
return 0;
}
