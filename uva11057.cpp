#include <stdio.h>
int main()
{

    unsigned long long int book_price[10000],peter_money,first_book[10000],second_book[10000],diff[10000],min=1000000;
    unsigned long long int book_no,i,j,k=0,temp;

    while(scanf("%lu",&book_no)==1){
       k=0;
       min=1000000;
    for(i=0;i<book_no;i++)scanf("%lu",&book_price[i]);
     scanf("%lu",&peter_money);

    for(i=0;i<book_no;i++){
     for(j=i+1;j<book_no;j++){
      if(book_price[i]+book_price[j]==peter_money){
       if(book_price[i]<book_price[j]){
        first_book[k]=book_price[i];
        second_book[k]=book_price[j];

       }
       else {
       first_book[k]=book_price[j];
       second_book[k]=book_price[i];
       }
       diff[k]=second_book[k]-first_book[k];
      k++;
      }

     }


     }

     for(i=0;i<k;i++){
     if(min>diff[i]){
         min=diff[i];
      temp=i;
     }
     }


     printf("Peter should buy books whose prices are %lu and ",first_book[temp]);
     printf("%llu.\n",second_book[temp]);

    printf("\n");
    }
    //return 0;
}
