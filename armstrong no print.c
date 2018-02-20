#include <stdio.h>
#include<math.h>
int main(void)
{
int k,rem,sum=0,t;
scanf("%d",&k);
t=k;
while(k!=0)
{
	rem=k%10;
	sum=sum+rem*rem*rem;
	k=k/10;
}
if(t==sum)
{
	printf("Armstrong number");
}
else
printf("not an armstrong");
	return 0;
}
