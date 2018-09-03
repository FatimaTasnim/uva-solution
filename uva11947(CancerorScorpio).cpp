#include<bits/stdc++.h>
#define For(x1,x2) for(int z=x1;z<=x2;z++)
int point[1000][32];
using namespace std;
void fix()
{
    int i;
    For(21,31)point[1][z]=1;//Aquarius January, 21 February, 19
    For(1,19)point[2][z]=1;//Aquarius January, 21 February, 19
    For(20, 29)point[2][z]=2; //Pisces February, 20 March, 20
    For(1,20)point[3][z]=2;//Pisces February, 20 March, 20
    For(21,31)point[3][z]=3;//Aries March, 21 April, 20
    For(1,20)point[4][z]=3;//Aries March, 21 April, 20
    For(21, 31)point[4][z]=4; //Taurus April, 21 May, 21
    For(1,21)point[5][z]=4;//Taurus April, 21 May, 21
    For(22,31)point[5][z]=5;//Gemini May, 22 June, 21
    For(1,21)point[6][z]=5;//Gemini May, 22 June, 21
    For(22,31)point[6][z]=6;//Cancer June, 22 July, 22
    For(1,22)point[7][z]=6;//Cancer June, 22 July, 22
    For(23,31)point[7][z]=7;//Leo July, 23 August, 21
    For(1,21)point[8][z]=7;//Leo July, 23 August, 21
    For(22,31)point[8][z]=8;//Virgo August, 22 September, 23
    For(1,23)point[9][z]=8;//Virgo August, 22 September, 23
    For(24,31)point[9][z]=9;//Libra September, 24 October, 23
    For(1,23)point[10][z]=9;//Libra September, 24 October, 23
    For(24,31)point[10][z]=10;//Scorpio October, 24 November, 22
    For(1,22)point[11][z]=10;//Scorpio October, 24 November, 22
    For(23,31)point[11][z]=11;//Sagittarius November, 23 December, 22
    For(1,22)point[12][z]=11;//Sagittarius November, 23 December, 22
    For(23,31)point[12][z]=12;//Capricorn December, 23 January, 20
    For(1,20)point[1][z]=12;//Capricorn December, 23 January, 20
}
string zodiac[]= {"","aquarius","pisces","aries","taurus","gemini","cancer","leo","virgo","libra","scorpio","sagittarius","capricorn"};

bool is_leap(int year)
{
    if((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0)))
        return true;
    return false;
}
int main()
{
    int days,day,month,year,i,c,flag,k=1,r;
    string str;
    int months[]= {0,31,28,31,30,31,30,31,31,30,31,30,31};
    fix();
    scanf("%d",&c);

    while(c--)
    {
        day=month=year=flag=0;
        days=280;
        str.clear();
        cin>> str;
        if(str[0]!='0')
            month=str[0]-'0';
        month= month*10 + (str[1]-'0');
        if(str[2]!='0')
            day=str[2]-'0';
        day= day*10 + (str[3]-'0');
        for(i=4; i<=7; i++)
        {
            if(str[i]!='0')
                flag=1;
            if(flag==1)
                year =  year *10 + (str[i]-'0');
        }
        while(days>0)
        {
            r=months[month];
            if(month==2)
                if(is_leap(year))
                {
                    r+=1;
                }
            if((r-day)<=days)
            {
                days-= (r-day) ;
                if(days==0)
                {
                    day=months[month];
                    break;
                }
                day=0;
                if(month<12)
                    month++;
                else month=1,year++;
            }
            else
            {
                day= days;
                days=0;
            }
        }
        printf("%d ",k);
        if(month<10)
            printf("0");
        printf("%d/",month);
        if(day<10)
            printf("0");
        printf("%d/",day);
        if(year<10)
            printf("000");
        else if(year<100)
            printf("00");
        else if(year<1000)
            printf("0");
        printf("%d ",year);
        cout << zodiac[point[month][day]] << endl;
        k++;
    }
    return 0;
}

