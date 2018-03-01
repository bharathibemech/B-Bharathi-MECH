#include<stdio.h>
void main()
{
    int a[10],i,n,b,sum=0;
    printf("enter the limit");
    scanf("%d",&b);
    for(i=0;i<b;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<b;i++)
    {
        sum=sum+a[i];
    }
    k=sum/n;
    printf("%d",k);
    
}
