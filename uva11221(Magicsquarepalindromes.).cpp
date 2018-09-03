#include<bits/stdc++.h>
#define MAX 101
#define PS system("pause")
using namespace std;
int main()
{
    string valobasha;
    int n,j,i,a,b,p,q,v,t,Tasnim;
    scanf("%d",&n);
    getchar();
    for(Tasnim=1; Tasnim<=n; Tasnim++)
    {
        string right[100001],down[100001],left[10001],up[100001],love,down_str,up_str,left_str ;
        j=0;
        getline(cin,valobasha);
        // cout<< valobasha <<endl;
        //getchar();
        for(i=0; valobasha[i]!='\0'; i++)
        {
            //cout << "yes" << endl;
            if((valobasha[i]>='A' && valobasha[i]<='Z') || (valobasha[i]>='a' && valobasha[i]<='z'))
                love+=valobasha[i];
            //cout << love[j]<<endl;
            j++;
        }
        //love[j]+='\0';
        // cout << love << "vvvv"<<endl;
        a=love.size();
        //cout << love.size()<<endl;
        //PS;
        b=sqrt(a);
        //cout << b << endl;
        //PS;
        t=0;
        p=0;
        if(a==b*b)
        {
            while(p<b)
            {
                q=-1;
                for(i=t; i<(t+b); i++)
                {
                    right[p]+=love[i];
                }
                right[p]+='\0';
                t=i;
                p++;
            }
            /*cout<< "right: ";
            for(v=0;v<b;v++)
                printf("%s ",right[v].c_str());
                cout<<endl;*/
            for(i=0; i<b; i++)
            {
                for(j=0; j<b; j++)
                {
                    down[i]+=right[j][i];
                    //cout<<"right["<<i<<"]["<<j<< right[i][j]<<endl;
                }
                down_str+=down[i];
            }
            //printf("down: ");
            /*for(v=0;v<b;v++)
                printf("%s ",down[v].c_str());
                cout<<endl;*/
            int c=0;
            for(i=b-1; i>=0; i--)
            {
                for(j=b-1; j>=0; j--)
                {
                    left[c]+=right[i][j];
                    //cout<<"right["<<i<<"]["<<j<< right[i][j]<<endl;
                }
                left_str+=left[c];
                c++;
            }
            /* printf("left: ");
            for(v=0;v<b;v++)
              printf("%s ",left[v].c_str());
              cout<<endl;*/
            c=0;
            for(i=b-1; i>=0; i--)
            {
                for(j=b-1; j>=0; j--)
                    up[c]+=right[j][i];
                up_str+=up[c];
                c++;
            }
            /*printf("up: ");
            for(v=0;v<b;v++)
            printf("%s ",up[v].c_str());
            cout<< up_str <<endl;
            cout<< down_str <<endl;
            cout<< left_str <<endl;*/
            if(love == up_str && love==down_str && love==left_str)
                printf("Case #%d:\n%d\n",Tasnim,b);
            else
                printf("Case #%d:\nNo magic :(\n",Tasnim);
        }
        else
            printf("Case #%d:\nNo magic :(\n",Tasnim);
    }
}
