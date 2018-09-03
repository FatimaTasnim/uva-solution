#include <iostream>
//#include <matrice.h>

using namespace std;

int main()
{
    int k;
    int m[50][50]={{1,2,3},{4,5,6},{7,8,9}};
    matrice m1,m2,m3,m4,m5(3,m),m6(3);
    m5.comunica();
    cout<<"\n";
    system("PAUSE");
    system("cls");
    cout<<"\n Inserisci i dati della matrice da aggiungere \n";
    cin>>m1;
    if(m1==m5)
    {
        cout<<"\n Matrici sono uguali\n\n";
        system("PAUSE");

    }
    else
    {
        m2=m1-m5;
        if(m2.getOrdine())
        {
            cout<<"\n La differenza delle due matrici e' \n";
            m2.comunica();
            cout<<"\n";
        }
        system("PAUSE");
    }
    cout<<"\n Inserisci i dati di un'altra matrice \n";
    cin>>m3;
    if(m3.getOrdine()==m5.getOrdine())
    {
        m3+=m5;
        cout<<"\n La somma delle due matrici e' :";
        m3.comunica();
        cout<<"\n";
    }
    else
    cout<<"\n OPERAZIONE IMPOSSIBILE\NORDINE MATRICI DIVERSI!!";
    system("PAUSE");
    cout<<"\nInsersci i dati di un'altra matrice";
    cin>>m4;
    cout<<"\n Inserire un valore numerico";
    cin>>k;
    m4=m4*k;
    cout<<"\nIl risultato della moltiplicazione della matrice per il valore numerico e'";
    m4.comunica();
    if(m1!=m4)
    {
        cout<<"\nLe due matrici sono diverse";
    }
    else
     cout<<"\n Le due matrici sono uguali";

    system("PAUSE");
    cout<<"\nIncremento di 1 tutti gli emeneti della matrice\n";
    m4++;
    m4.comunica();
    system("PAUSE");
    return 0;
}
