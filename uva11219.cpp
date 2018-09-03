#include<iostream>
using namespace std;
int main()
{
    int d,d1,m,m1,y,y1,months=0,days=0,years=0;
    char st,st1,st2,st3;
    cin>>d>>st>>m>>st1>>y;
    cin>>d1>>st2>>m1>>st3>>y1;
        years=y-y1;
        if(years>130)
            cout<< "Check birth date"<<endl;
        else if(years<0)
            cout<< "Invalid birth date"<<endl;
        else
        {
            months=m-m1;
            if(months<0)
            {
                days=d-d1;
                if(days<0)
                    years--;
                if(years>0)
                {
                    cout<< years<<endl;
                }else
                    cout<< "Invalid birth day"<<endl;
            }
            else
                cout<< years<<endl;
        }
return 0;
}
