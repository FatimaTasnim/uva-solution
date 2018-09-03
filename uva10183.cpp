#include<bits/stdc++.h>
using namespace std;
#define LLU long long unsigned int
#define LLD long long double
string add(string f,string s)
{
string res="";
int i,val,carry=0,br=min(f.length(),s.length());
for(i=0;i<br;i++)
{
val=(f[i]-'0')+(s[i]-'0')+carry;
res.push_back('0'+val%10);
carry=val/10;
}
//cout<<res<i)
if{
val=(f[i]-'0')+carry;
res.push_back('0'+val%10);
carry=val/10;
}
else if(s.length()>i)
{
val=(s[i]-'0')+carry;
res.push_back('0'+val%10);
carry=val/10;
}
while(carry)
{
res.push_back('0'+carry%10);
carry/=10;
}
return res;
}
int give(string a,vector fct)
{
int len=0,j;
string s="";
bool ans;
len=a.length();
for(int i=a.length()-1;i>=0;i--)
{
s.push_back(a[i]);
}
for(int i=1;i<500;i++)
{
if(fct[i].length()=0;j--)
{
if(fct[i][j]>s[j])
{
ans=true;
break;
}
else if(fct[i][j]==s[j])
{
continue;
}
else
{
break;
}
}
if(ans)
{
return i-1;
}
}
else
return i-1;

}
return 0;
}
int comp(string a,string b,vector fct)
{
string s="";
for(int i=a.length()-1;i>=0;i--)
{
s.push_back(a[i]);
}
a=s;
s="";
for(int i=b.length()-1;i>=0;i--)
{
s.push_back(b[i]);
}
b=s;
//cout<<a <<" "<<b<<endl;
bool f1=false,f2=false;
for(int i=1;i<500;i++)
{
if(fct[i]==a)
f1=true;
if(fct[i]==b)
f2=true;
}
//cout<<f1<<" "<<f2<<endl;
if(f1 && f2) return 1;
if(f1 && !f2) return 1;
return false;
}
int main()
{
vector fct(500,"");
fct[0]="1";
fct[1]="1";
for(int i=2;i>a>>b)
{
if(a=="0" && b=="0")
break;
cout<<give(b,fct)-give(a,fct)+comp(a,b,fct)<<endl;
}
return 0;
}
