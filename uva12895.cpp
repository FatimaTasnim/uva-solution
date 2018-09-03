#include<bits/stdc++.h>
using namespace std;
int arr[101];
int main()
{
    long n,c,num,j,mul,i;
    double p;
    cin>> c;
    while(c--){
        cin>> num;
        n=num;mul=0;i=0;
    while(n!=0){
        arr[i]=n%10;
        i++;
        n/=10;
    }
    for(j=0;j<i;j++){p=pow(arr[j],i);mul+=p;}
    if(mul==num)cout << "Armstrong\n";
    else cout << "Not Armstrong\n";

}
}
