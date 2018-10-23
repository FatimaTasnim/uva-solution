#include<bits/stdc++.h>
using namespace std;

struct pair_{
    char number;
    char color;
    pair_(char _number=' ',char _color=' '):number(_number),color(_color){}
};
vector<vector<pair_> > vc;

int  check(pair_ cc,int length)
{

    int temp;
    while(length>=0)
    {
        if(length-3>=0)
        {
            temp=vc[length-3].size()-1;
            if(vc[length-3][temp].number==cc.number||vc[length-3][temp].color==cc.color)
            {
                length-=3;
                continue;
            }
        }
        if(length-1>=0)
        {
            temp=vc[length-1].size()-1;
            if(vc[length-1][temp].number==cc.number||vc[length-1][temp].color==cc.color)
            {
                length-=1;
                continue;
            }
        }
        break;
    }
    return length;
}
int main()
{

    char take[3];
    unsigned int i;
    while(cin>>take&&take[0]!='#') {

        int number=52;
        while(number--)   {
            pair_ cc(take[0],take[1]);
            int length=check(cc,vc.size());
            if(length==(int)vc.size())  {
                vector<pair_> vv(1,cc);
                vc.push_back(vv);
            }
            else
            {
               vc[length].push_back(cc);
               TT: for(i=length+1;i<vc.size();i++) {
                    pair_ dd=vc[i][vc[i].size()-1];
                    unsigned int new_location=check(dd,i);
                    if(new_location!=i)
                    {
                         vc[new_location].push_back(dd);
                         vc[i].pop_back();
                         if(vc[i].size()==0)
                            vc.erase(vc.begin()+i);
                         length=new_location;
                         goto TT;

                    }
                }
            }
            if(number==0)
                continue;
            cin>>take;
        }
        cout<<vc.size()<<(vc.size()!=1?" piles remaining: ":" pile remaining: ");
        for(i=0;i<vc.size();i++)
        {
            if(i!=vc.size()-1)
                printf("%d ",vc[i].size());
            else
                printf("%d\n",vc[i].size());
        }
        vc.clear();
    }

    return 0;
}
