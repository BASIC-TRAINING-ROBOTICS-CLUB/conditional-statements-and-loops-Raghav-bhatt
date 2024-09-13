#include <stdio.h>

int main()
{
    int a;
    printf("Enter the year to check it is leap or not :");
    scanf("%d",&a);
    
    if (a>=2000)
    {
        if (a%4 == 0)
        {
            printf("It is a leap year");
        }
        else
        {
            printf("It's not a leap year");
        }
    }
    else
    {
        printf("Sorry! We don't have data of given information...");
    }
}