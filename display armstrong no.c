#include <stdio.h>
int main(void) 
{
	int b,k,temp,i,rem=0;
    scanf("%d%d",&b,&k);
for(i=b;i<m;i++)
{ 
int sum=0;
    temp=i;
    while(temp!=0)
{
    rem=temp%10;
    sum=sum+rem*rem*rem;
    temp=temp/10;
}
if(sum==i)
printf("%d\b",sum);
}
return 0;
}
