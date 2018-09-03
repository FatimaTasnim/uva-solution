#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    string str;
    int c=1;
    while(cin>>str)
    {
        if(str=="#")
            break;
        if(str=="HELLO")
        cout<< "Case "<<c<<": ENGLISH"<<endl;
        else if(str=="HOLA")
        cout<< "Case "<<c<<": SPANISH"<<endl;
        else if(str=="HALLO")
        cout<< "Case "<<c<<": GERMAN"<<endl;
        else if(str=="BONJOUR")
        cout<< "Case "<<c<<": FRENCH"<<endl;
        else if(str=="CIAO")
        cout<< "Case "<<c<<": ITALIAN"<<endl;
        else if(str=="ZDRAVSTVUJTE")
        cout<< "Case "<<c<<": RUSSIAN"<<endl;
        else
           cout<< "Case "<<c<<": UNKNOWN"<<endl;
c++;
    }
    return 0;
}
