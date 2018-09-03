#include<bits/stdc++.h>
#define M 70000
using namespace std;
bool mark[M]
vector<int>prime;
void siv()
{
    for(int i=2;i*i<=M;i++)
        if(!mark[i])
        for(int j=i;j*i<=M;j++)
        mark[i*j]=true;
    for(int i=2;i<=M;i++)
        if(!mark[i])
        prime.push_back(i);
}

int main()
{

}
