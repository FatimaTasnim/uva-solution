#include <stdio.h>
#include <string.h>
char str[1000];
int main()
{
int n;
scanf("%d",&n);
getchar();
while(n--)
{ int i,sum=0,k=0;
gets (str);
int len=strlen(str);
for(i=0;i<len;i++)
{
if(str[i]=='M')
sum+=1;
if(str[i]=='F');
sum-=1;

}
if( sum==0 && len!=2)
printf("LOOP\n");
else
printf("NO LOOP\n");
}
return 0;
}
