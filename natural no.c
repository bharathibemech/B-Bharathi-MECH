include <stdio.h>
int main()
{
    int c, i, sum = 0;
    
    printf("Enter a positive integer: ");
    scanf("%d",&c);

    for(i=1; i <= c; ++i)
    {
        sum += i;   // sum = sum+i;
    }

    printf("Sum = %d",sum);

    return 0;
}
