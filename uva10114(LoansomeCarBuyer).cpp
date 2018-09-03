#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n,_M,i;
//    freopen(tasnim_.txt,"r",stdin);
    double owe,ow,rent,pre,prev_mnth,owe_,car_price;
    while(scanf("%d%lf%lf%d",&m,&ow,&rent,&n))
    {
        if(m<0)break;
        double Month[1001]={-1};
        car_price=rent+ow;
        owe= car_price/m;
        for(i=0;i<n;i++)
        {
            scanf("%d%lf",&_M,&pre);
            Month[_M]=pre;
            if(i==0)
                 prev_mnth=Month[_M];
        }
        i=0;
        while(i<m)
        {
            if(Month[i]!=-1)
            prev_mnth=Month[i];
            car_price=car_price-(car_price*prev_mnth);
            owe_-=owe;
           // cout<< car_price << " "<< owe << endl;
           // system("pause");
            if(owe_<car_price)
                    break;
            i++;
        }
        printf("%d\n",i+1);
    }
}
