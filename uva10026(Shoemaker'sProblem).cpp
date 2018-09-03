#include<bits/stdc++.h>
using namespace std;
struct golu{
double value;
int Index;
};
bool compare(golu a, golu b){
return a.value>b.value;
}
int main()
{
    int n,q,i,a,b,flag=0;
     golu pitlu[1001];
    scanf("%d",&n);
    while(n--){
        scanf("%d",&q);
        for(i=0;i<q;i++){
            scanf("%d %d",&a,&b);
            pitlu[i].value=double(b)/double(a);
            pitlu[i].Index=i+1;
        }
        stable_sort(pitlu, pitlu+q, compare);
        if(flag==1)printf("\n");
        flag=1;
        for(i=0;i<q-1;i++)
            printf("%d ",pitlu[i].Index);
        printf("%d\n",pitlu[i].Index);
        //pitlu.clear();
    }
}
