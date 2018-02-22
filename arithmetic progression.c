#include<stdio.h>
#include<string.h>
int main()
{
int n,f,d,sum=0,i;
printf("enter the series\n");
scanf("%d",&n);
printf("enter the difference and 1st term \n");
scanf("%d%d",&d,&f);
for(i=0;i<n;i++)
{
sum=sum+f;
f=f+d;
}
printf("%d",sum);
return 0;
}
