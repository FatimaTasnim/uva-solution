#include<stdio.h>
#include<math.h>
int main()
{
    int number,i,counter=0,save,sqr,flag;
    while(scanf("%d",&number))
    {
        if(number==0)break;
        if(floor(sqrt(number))!=sqrt(number))
            counter++;
        save=number;
        for(i=2;i<=sqrt(number);i++)
        {
            flag=0;
            while(!(number%i))
            {
                number/=i;
                flag=1;
            }
            if(flag)
                counter++;
        }
        printf("%d : %d\n",save,counter);
        counter=0;
    }
    return 0;
}

