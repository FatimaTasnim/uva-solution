#include<stdio.h>
#include<string.h>
int main()
{
    int n,sum,a,g,m,i,t,r,j,flag,k;
    char ch,b[600];
    scanf("%d",&n);
    ch=getchar();
    while(n--)
    {
        sum=0;a=0;m=0;r=0;g=0;t=0;i=0;
        gets(b);
        //puts(b);
        //for(k=0;b[k]!='\0';k++);printf("%d\n",k);
        for(j=0;b[j];j++)
        {
            if(b[j]=='M'){
                    //printf("yes");
                m++;}
            else if(b[j]=='A')a++;
            else if(b[j]=='R')r++;
            else if(b[j]=='G')g++;
            else if(b[j]=='T')t++;
            else if(b[j]=='I')i++;
        }
       // printf("%d %d %d %d %d %d",m,a,r,g,t,i);
        while(1){
        if(m>=1 && a>=3 && r>=2 && g>=1 && t>=1 && i>=1)
        {
            //printf("yes");
            m-=1;a-=3;r-=2;g-=1;t-=1;i-=1;
            sum++;
        }
        else
            break;
        }
        printf("%d\n",sum);
    }
    return 0;
}
// accepted :)
