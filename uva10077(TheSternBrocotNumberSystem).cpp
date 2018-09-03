#include<bits/stdc++.h>
using namespace std;
int main()
{
    while (true)
    {
        int m, n,left_m,left_n,right_m,right_n,new_m,new_n;
        scanf("%d%d",&n,&m);
        if (m == 1 && n == 1)
        {
            break;
        }
        right_m = 0,right_n = 1,left_m = 1,left_n = 0;
        while (1)
        {
            new_m = left_m + right_m;
            new_n = left_n + right_n;
          //  cout << new_m << " " << new_n << endl;
            if (new_m == m && new_n == n)
            {
                break;
            }
            else
            {
                if (new_m * n > new_n * m)
                {
                    printf("R");
                    left_m = new_m;
                    left_n = new_n;
                }
                else
                {
                    printf("L");
                    right_m = new_m;
                    right_n = new_n;
                }
            }
        }
        printf("\n");
    }

    return 0;
}
