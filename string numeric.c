#include<iostream>
#include<string.h>
using namespace std;
int main()
{
char c[30];
int i,flag=0,k=15,q;
for(i=0;i<=k;i++)
{
	cin>>c[i];
}
q=strlen(c);
for(i=0;c[i]!='\0';i++)
{
if(c[i]=='0'||c[i]=='1'||c[i]=='2'||c[i]=='3'||c[i]=='5'||c[i]=='6'||c[i]=='7'||c[i]=='8'||c[i]=='9')
{
flag=flag+1;
}
}
if(flag==0)
cout<<"no";
else
cout<<"yes";
return 0;
}
