#include<stdio.h>
void main()
{
int k,temp,i,j,a[20];
printf("enter the array of numbers");
scanf("%d",&k);
printf("enter the numbers");
for(i=0;i<=k;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<=k;i++)
{
for(j=i+1;j<=k;j++)
{
if(a[i]<a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
printf("%d",a[0]);
}

