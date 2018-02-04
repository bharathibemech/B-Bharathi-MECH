#include <stdio.h>
 #include<conio.h>
void main()
{
    int z;
 
    printf("Enter a number: \n");
    scanf("%d", &z);
    if (z > 0)
        printf("%d is a positive number \n",z);
    else if (z < 0)
        printf("%d is a negative number \n",z);
    else
        printf("%d 0 is neither positive nor negative");
getch();
}
