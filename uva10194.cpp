#include<iostream>
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<vector>
#include<algorithm>
using namespace std;
int collect_integers(char * n)
{
    int i,sum=0;
    for(i=0;n[i];i++)
    {
        if(n[i]>=48 && n[i]<=57)
            sum=sum*10+(n[i]-48);
        if(n[i]=='@')
            break;
    }
    //cout<<sum<<endl;
    return sum;
}
int collect_integers2(char * n)
{
    int i,t,r=0,sum=0;
    t=strlen(n);
    for(i=t;i>=0;i--)
    {
        if(n[i]>=48 && n[i]<=57)
            sum=sum*10+(n[i]-48);
        if(n[i]=='@')
            break;
    }
    while(sum!=0)
    {
        r=r*10+sum%10;
        sum=sum/10;
    }
    //cout<<r<<endl;
    return r;
}
char * search_1st_player(char * n)
{
    char p[30];
    int i;
    for(i=0;n[i];i++)
    {
        if(n[i]=='#')
            break;
        p[i]=n[i];
    }
    p[i]='\0';
    //puts(p);
    return p;
}
char *str_rev(char *str)
{
      char *p1, *p2;

      if (! str || ! *str)
            return str;
      for (p1 = str, p2 = str + strlen(str) - 1; p2 > p1; ++p1, --p2)
      {
            *p1 ^= *p2;
            *p2 ^= *p1;
            *p1 ^= *p2;
      }
      return str;
}
char * search_2nd_player(char * n)
{
    char p[30],q[30];
    int t,i,j,k;
    k=strlen(n);
    for(i=k-1,j=0;;i--,j++)
    {
        if(n[i]=='#')
            break;
        p[j]=n[i];
    }
    p[j]='\0';
    //cout<<str_rev(p);
    strcpy(q,str_rev(p));
    //printf("%s",q);
    return q;
}
int main()
{
    int N,T,goals1[1000],goals2[1000],G,i,j,game_counter[100]={0},team_goals[100]={0},team_against_goals[100]={0},team_point[100]={0},max_games,max_goals;
    char t_name[100],t_n1[30],t_n2[30],team[100][30],ch[1000],info[1000][200],team1[30],team2[30];
    vector<int>count_games;
    vector<int>count_goals;
    while(scanf("%d",&N)==1)
    {
        getchar();
        while(N--)
        {
            gets(t_name);
            scanf("%d",&T);
            getchar();
            for(i=0;i<T;i++)
            {
                gets(team[i]);
                puts(team[i]);
                //cout<<endl;
            }
            scanf("%d",&G);
            for(j=0;j<G;i++)
            {
                gets(info[j]);
                strcpy(team1,search_1st_player(info[j]));
                strcpy(team2,search_2nd_player(info[j]));
                for(i=0;i<T;i++)
                {
                    if(team1==team[i]){
                        game_counter[i]++;
                        if(collect_integers(info[j])>collect_integers2(info[j]))
                           team_point[i]+=3;
                        else if(collect_integers(info[j])==collect_integers2(info[j]))
                            team_point[i]+=1;
                        team_goals[i]+=collect_integers(info[j]);
                        team_against_goals[i]+=collect_integers2(info[j]);

                    }
                    if(team2==team[i]){
                        game_counter[i]++;
                        if(collect_integers2(info[j])>collect_integers(info[j]))
                           team_point[i]+=3;
                        else if(collect_integers(info[j])==collect_integers2(info[j]))
                           team_point[i]+=1;
                        team_goals[i]+=collect_integers2(info[j]);
                        team_against_goals[i]+=collect_integers(info[j]);
                    }
                }
            }
                for(i=0;i<T;i++)
                {
                    cout<<team[i]<< " "<<team_goals[i]<< " "<<team[i]<<" "<<team_goals[i]<<" "<<team_against_goals[i];
                    //count_games.push_back(game_counter[i]);
                    //count_goals.push_back(team_goals[i]);
                }
                //sort(count_games.begin(),count_games.end());
                //sort(count_goals.begin(),count_goals.end());
                max_games=count_games[T-1];
                max_goals=count_goals[T-1];


        }
    }
}
