#include <bits/stdc++.h>
using namespace std;
int main()
{   int t,t2;
    long n,x1,x2,y1,y2,i,j;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d",&t2);
        scanf("%ld",&n);
        for(j=0;j<t2;j++){
            scanf("%ld %ld %ld %ld",&x1,&y1,&x2,&y2);
            if(((x1+y1)%2) !=((x2+y2)%2)
               || x1>n || x2>n || y1>n || y2>n
               || x1<1 || x2<1 || y1<1 || y2<1)
                printf("no move\n");
            else if(x1==x2 && y1==y2)
                printf("0\n");
            else if(abs(x2-x1)==abs(y2-y1))
                printf("1\n");
            else
                printf("2\n");
        }
    }
       return 0;
}
