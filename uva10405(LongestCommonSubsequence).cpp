#include<bits/stdc++.h>
using namespace std;
int M,N,mini;
int c[1001][1001],s[1001][1001];
string x,y;
stack<char> st;
void print()
{
    while(!st.empty()){
        cout << st.top();
        st.pop();
    }
}
void print_LCS(int i,int j)
{
    if(i==0 || j==0)
        return;
    if(s[i][j]==1)
    {
        ///printf("%c",x[i-1]);
        st.push(x[i-1]);
        print_LCS(i-1,j-1);
    }
    else if(s[i][j]==2)
        print_LCS(i-1,j);
    else
        print_LCS(i,j-1);
    print();
}
void LCS()
{
    int i,j;
    memset(c,0,sizeof c);
    //cout << M << " " << N << endl;
    for(int j=1;j<=N;j++)
    {
        for(i=1;i<=M;i++)
        {
           // cout<< "OK" << endl;
            if(x[i-1]==y[j-1]){
                c[i][j]=c[i-1][j-1]+1;
                //cout<< c[i][j] << " ";
                s[i][j]= 1;
            }
            else if(c[i][j-1]>c[i-1][j])
            {
                c[i][j]=c[i][j-1];
               // cout<< c[i][j] << " ";
                s[i][j]= 3;
            }
            else
            {
                c[i][j]=c[i-1][j];
                //cout<< c[i][j] << " ";
                s[i][j]= 2;
            }
            //cout << c[i][j] << " ";
        }
        //cout<< endl;
    }
}
int how_many()
{
    int cnt = 0 ;
    for(int j=1;j<=N;j++)
    {
        for(int i=1;i<=M;i++)
        {
            if(c[i][j]== c[M][N] && s[i][j]==1)
                cnt ++;
        }
    }
    return cnt;
}
int main()
{
    while(getline(cin,x)) {
    getline(cin,y);
    M=x.size();
    N=y.size();
    mini=M;
    if(N>M)
    mini =N;
    LCS();
    cout<< c[M][N]<< endl;
   /// cout<< "Number of LCS: " << how_many()<<endl;
    // print_LCS(M,N);
    }
}
