#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int n1,n2,nt,ni,n,ns;
    bool nf;
    scanf("%d",&n);
    while(n--){
        scanf("%d %d",&n1,&n2);
        nt=(n2-n1);ni=1;ns=0;
        nf=false;
        while(nt>0){
          nt-=ni;ns++;
          if(nf)ni++;
          nf=!nf;
        }
        printf("%d\n",ns);
    }
    return 0;
}
