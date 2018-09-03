#include<bits/stdc++.h>
using namespace std;
char tab[10000];

int main()
{

    char demo[100], ch, input[1000], plain[200];
    int i, t;

    scanf("%d",&t);
    getchar();
    gets(demo);

    while (t--)
    {

        for (i=0 ; i<200 ; i++)
        {
            tab[i]=0;
        }

        gets(plain);

        i=0;
        while ((ch=getchar())!='\n')
        {
            tab[plain[i++]] = ch;
            putchar(ch);
        }
        putchar('\n');
        puts(plain);

        while (gets(input))
        {
            if (!strcmp(input,""))
                break;
            else
            {
                for (i=0 ; input[i]!='\0' ; i++)
                {
                    if (tab[input[i]])
                        putchar(tab[input[i]]);
                    else
                        putchar(input[i]);
                }
            }
            printf("\n");
        }

        if (t) printf("\n");


    }

    return 0;

}
