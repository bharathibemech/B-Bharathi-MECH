#include<stdio.h>
void main()
{
int a[10],i,j,temp,k;
printf("enter the number");
scanf("%d",&k);
printf("enter the number");
for(i=0;i<k;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<k;i++)
{
for(j=i+1;j<k;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
for(i=0;i<k;i++)
{
printf("%d",a[i]);
}
}
