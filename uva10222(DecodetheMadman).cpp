#include <bits/stdc++.h>

using namespace std ;

int main()
{
    char str[10000] ;
    char key_board[] = {'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p', 91, 93, 92,
                     'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 59, 39,
                     'z', 'x', 'c', 'v', 'b', 'n', 'm', 44, 46, 47,
                     '`', '1', '2', '3', '4', '5', '6', '7', '8', '9', '0', 45, 61} ;

    while(gets(str))
    {
        for(int i = 0;str[i]; i++)
        {
            if((str[i] == ' ')||(str[i] == '\n'))
                printf("%c", str[i]) ;
            else
            {
                for(int j = 0; j<=strlen(key_board); j++)
                {
                    if(tolower(str[i]) == key_board[j])
                    {
                        printf("%c",key_board[j-2] );
                        break ;
                    }
                }
            }
        }
        printf("\n");
    }
}
