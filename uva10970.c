#include<stdio.h>
int main()
{
    int row,column,cuts;
    while(scanf("%d%d",&row,&column)==2)
          {
             cuts=((row-1)*column)+(column-1);
             printf("%d\n",cuts);
          }return 0;
}
