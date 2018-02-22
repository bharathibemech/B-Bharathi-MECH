#include<stdio.h>
int main()
{
int b,k,d,sum;
printf("Enter the first number:");
scanf("%d",&b);
printf("\nEnter the total numbers:");
scanf("%d",&k);
printf("\nEnter the difference:");
scanf("%d",&d);
sum=k*((2*b+(k-1)*d))/2;
  printf("\n sum is %d",sum);
return 0;
}
