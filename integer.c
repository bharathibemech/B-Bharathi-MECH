#include<stdio.h>
#include<conio.h>
int main()
{
 long long a;
    int count = 0;
    printf("Enter an integer: ");
    scanf("%lld", &a);
    while(a != 0)
    printf("Number of digits: %d", count);
    getch();
}
