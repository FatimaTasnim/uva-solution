#include<bits/stdc++.h>
using namespace std;
int main()
{
    string Tasnim;
    int i;
    while(cin>> Tasnim)
    {
        string Fatima;
        for(int i=0;Tasnim[i];i++)
        {
            if(Tasnim[i]=='B' || Tasnim[i]=='b' ||Tasnim[i]=='F'||Tasnim[i]=='f'||Tasnim[i]=='P' ||Tasnim[i]=='p'||Tasnim[i]=='V'||Tasnim[i]=='v')
                Fatima+="1";
            else if(Tasnim[i]=='C' || Tasnim[i]=='c' ||Tasnim[i]=='G'||Tasnim[i]=='g'||Tasnim[i]=='J' ||Tasnim[i]=='j'||Tasnim[i]=='K'||Tasnim[i]=='k'||
                    Tasnim[i]=='Q' || Tasnim[i]=='q' ||Tasnim[i]=='S'||Tasnim[i]=='s'||Tasnim[i]=='X' ||Tasnim[i]=='x'||Tasnim[i]=='Z'||Tasnim[i]=='z')
                Fatima+="2";
            else if(Tasnim[i]=='D' || Tasnim[i]=='d' || Tasnim[i]=='T' || Tasnim[i]=='t')
                Fatima+="3";
            else if(Tasnim[i]=='L'||Tasnim[i]=='l')
                Fatima+="4";
            else if(Tasnim[i]=='M'||Tasnim[i]=='m'||Tasnim[i]=='N'||Tasnim[i]=='n')
                Fatima+="5";
            else if( Tasnim[i]=='R'||Tasnim[i]=='r')
                Fatima+="6";
        }
        printf("%s\n",Fatima.c_str());
    }
}
