#include<stdio.h>
void main()
{
int k,f=1,i;
scanf("%d",&k);
for(i=k;i>=1;i--)
f=f+i;
printf("factorial=%d",f);
}
