#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string S;
    int c=1;
    while(true)
    {
        cin>>S;
        if(S=="#")
            break;
        cout<< "Case "<<c<< ": ";
        if(S=="HELLO")
            cout<< "ENGLISH"<<endl;
        else if(S=="HOLA")
            cout<< "SPANISH"<<endl;
        else if(S=="HALLO")
            cout<< "GERMAN"<<endl;
        else if(S=="BONJOUR")
            cout<< "FRENCH"<<endl;
        else if(S== "CIAO")
            cout<< "ITALIAN"<<endl;
        else if(S== "ZDRAVSTVUJTE")
            cout<< "RUSSIAN"<<endl;
        else
            cout<< "UNKNOWN"<<endl;
            c++;
    }return 0;
}
