#include<stdio.h>
#include<string.h>
int main()
{
int i,j,length,d,a,n;
char pinku[1000];
while(scanf("%d",&n)==1)
 {
 if(n==0) break;
 scanf(" ");
 gets(pinku);
 length=strlen(pinku);
 d=length/n;
 for(i=1;i<=n;i++)
  {
  a=i*d;
  for(j=a-1;j>=a-d;j--)
  printf("%c",pinku[j]);
  }
 printf("\n");
 }
}
