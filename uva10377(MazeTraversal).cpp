///Problem Type: Graph With Diraction Array :)
///Input Type: String Graph (2D Grid)
#include<bits/stdc++.h>
using namespace std;
int dir_x[]={0,1,0,-1};
int dir_y[]={-1,0,1,0};
char dir[]={'N','E','S','W'};
int main()
{
    int row,col,d1,d2,m1,m2,axes,i,j,k,n;
    char str[101],ch[101];
    char arr[101][101];
    bool flag,fg=false;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d%d",&row,&col);
        if(row==0 && col==0)
            break;
            axes=0;
            flag=false;

       cin.getline(str, sizeof(str));
		for (i = 0; i < row; ++i){
			cin.getline(str, sizeof(str));
			for(j=0;j<strlen(str);j++)
                arr[i][j]=str[j];
		}
       cin>> d1 >> d2 ;
        d1--;d2--;
        while(true)
        {
            cin.getline(ch, sizeof(ch));
            for(k=0;k<strlen(ch);k++){
            if(ch[k]=='R' && axes<3){
                axes++;
            }
            else if(ch[k]=='R' && axes==3)
                axes=0;
             if(ch[k]=='L' && axes>0){
                axes--;
                }
            else if(ch[k]=='L' && axes==0)
                axes=3;
            else if(ch[k]=='F')
            {
                m1=d1+dir_y[axes];
                m2=d2+dir_x[axes];
                if(arr[m1][m2]!='*')
                {
                    d1=m1;d2=m2;
                }
            }
            else if(ch[k]=='Q')
            {
                flag=true;
                break;
            }

            }
            if(flag==true)
                break;
        }
        if(fg)cout<< endl; fg=true;
        printf("%d %d %c\n",d1+1,d2+1,dir[axes]);
    }
}
