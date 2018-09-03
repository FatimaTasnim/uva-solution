#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    char a[10000];
    int T,l,i,j;
    scanf("%d",&T);
    getchar();
    while(T--)
    {
        gets(a);
        l=sqrt(strlen(a));
        if(l*l==strlen(a)){
        for(i=0;i<l;i++)
        {
            printf("%c",a[i]);
            for(j=1;j<l;j++)
                printf("%c",a[i+j*l]);
        }
        printf("\n");
        }
        else
             printf("INVALID");
                printf("\n");
    }
    return 0;
}

