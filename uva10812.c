#include<stdio.h>
int main()
{
    long int sum,difference,r1,r2;
    long int n,c=1;
    scanf("%ld",&n);
    while(c<=n){
    scanf("%ld%ld",&sum,&difference);
    if(difference>sum || (sum+difference)%2>0)
        printf("impossible\n");
        else{
    r1=(sum+difference)/2;
    r2=sum-r1;
    printf("%ld %ld\n",r1,r2);}
    c++;
    }return 0;
}
