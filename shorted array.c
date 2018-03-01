#include<stdio.h>
void main()
{
int a[10],i,j,k,temp;
printf("enter limit");
scanf("%d",&k);
printf(" enter the number");
for(i=0;i<k;i++)
{
scanf("%d",&a[i]);
}
printf("sorted array");
for(i=0;i<n;i++)
{
for(j=1;j<k;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}}
}
for(i=0;i<k;i++)
{
printf("%d\n",a[i]);
}
}
