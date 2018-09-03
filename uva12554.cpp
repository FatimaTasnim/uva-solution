#include<bits/stdc++.h>
using namespace std;
string arr[]={"Happy","birthday","to","you","Happy","birthday","to","you",
              "Happy","birthday","to","Rujia","Happy","birthday","to","you"};
int main()
{
    int n,i,k=0;
    bool flag=true;
    string name[105];
    cin>> n;
    for(i=0;i<n;i++){
        cin>> name[i];
    }
    while(flag){
        for(i=0;i<16;i++){
            cout << name[k] << ": " <<arr[i] << endl;
            k++;
            if(k>=n){k=0;flag=false;}
        }

    }
}
