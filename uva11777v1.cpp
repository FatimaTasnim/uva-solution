#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int m1,m2,m3,attendance,ct,t,i,c=1;
    float sum;
    char a;
    cin>>t;
    while(t>=c)
    {
        cin>>m1>>m2>>m3>>attendance;
        vector<int> quizes;
        for(i=0;i<3;i++)
        {
            cin>>ct;
            quizes.push_back(ct);
        }
        sort(quizes.begin(),quizes.end());
        sum=m1+m2+m3+attendance+((float)(quizes[1]+quizes[2])/2.0);
        if(sum>=90)a='A';
        else if(sum>=80 && sum<90) a='B';
        else if(sum>=70 && sum<80) a='C';
        else if(sum>=60 && sum<70) a='D';
        else a='F';
        cout<< "Case "<<c<<": "<<a<<endl;
        quizes.erase(quizes.begin(),quizes.end());
        c++;
    }return 0;
}
//it's accepted :)..
