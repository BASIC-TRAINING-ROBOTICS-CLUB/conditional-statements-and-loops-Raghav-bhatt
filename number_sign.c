#include <stdio.h>

int main()
{
    int a;
    printf("Enter the number to check whether it is positive , negative or zero :");
    scanf("%d",&a);

    if (a > 0)
    {
        printf("Number is positive");
    }
    else if (a < 0)
    {
        printf("Number is negative");
    }
    else
    {
        printf("Number is neither positive nor negative");
    }
}