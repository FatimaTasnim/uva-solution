#include <iostream>
#include <iomanip>
using namespace std;
long long int factorial (long long int n)
{
    long long int r = 1;
    for (long long int i = 2; i <= n; i++)
    {
        r *= i;
    }
    return r;
}
int main ()
{
    long long unsigned int m, n;
    cin>>m;
    long long unsigned int r = 1;
    for (long long unsigned int i = 2; i <= m; i++)
    {
        r *= i;
    }
    cout<<r;
    /*while (cin >> m >> n&&m!=0&&n!=0)
    {
        long long int r = (factorial(m))/(factorial(m-n)*factorial(n));
        cout << m << " things taken " << n << " at a time is " << fixed << setprecision(0)  << r << " exactly." << endl;
    }*/
}
