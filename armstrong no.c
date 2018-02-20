#include<stdio.h>
int main()
{
int k,m,sum=0,p,i;
scanf("%d",&k);
p=k;
for(i=0;k>0;i++)
{
m=k%10;
sum=sum+m*m*m;
k=k/10;
}
if(sum==p)
printf("armstrong number");
else
printf("not armstrong number");
return 0;
}
