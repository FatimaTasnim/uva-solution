#include<iostream>
#include<stdio.h>
#include<vector>
#include<algorithm>
#include<string.h>
using namespace std;
int isprime(int n)
{
    int i;
    if (n==2)
        return 1;
    for(i=2;i<n;i++)
    {
        if(i%2==0)
        {
            return 0;
            break;
        }
    }
    return 1;
}
int main()
{
    int T,c=1,i,j,sum;
    char temp;
    string ch;
    cin>>T;
    while(T>=c)
    {
        cin>>ch;
        vector<char> hablu;
        for(i=0;ch[i];i++)
        {
            sum=0;
            if(ch[i]>=48 || ch[i]<=57 || ch[i]>=65 || ch[i]<=90 || ch[i]>=97 || ch[i]<=122){
                    cout<<"step1 ";
                    temp=ch[i];
            for(j=0;ch[j];j++)
            {
                if(ch[i]==ch[j]){
                    sum++;
                    ch[j]='#';
            cout<<"step2";
                }
            }
            cout<<ch<<endl;
            if(isprime(sum)==1){
                    hablu.push_back(temp);
                    cout<<"step3";
            }
           }
            //if(isprime(sum)==1)
                    //hablu.push_back(ch[i]);
        }
        sort(hablu.begin(),hablu.end());
        cout<< "Case "<<c<< ": ";
        if(hablu[0]=='\0')
            cout<< "empty"<<endl;
        else
        {
            for(i=0;i<hablu.size();i++)
            cout<<hablu[i];
            cout<<endl;
        }
        c++;
    }
}
//do not solved yet :(..
