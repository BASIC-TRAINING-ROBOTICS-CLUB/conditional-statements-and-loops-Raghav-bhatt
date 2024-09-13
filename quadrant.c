#include <stdio.h>

int main()
{
    int x,y;
    printf("enter the value of x :");
    scanf("%d",&x);
    printf("enter the value of y :");
    scanf("%d",&y);

    if (x > 0 && y > 0)
    {
        printf("It refrs to 1st qudrant");
    }
    else if (x > 0 && y < 0)
    {
        printf("It refers to 2nd quadrant");
    }
    else if (x < 0 && y < 0)
    {
        printf("It refers to 3rd quadrant");
    }
    else if (x < 0 && y > 0)
    {
        printf("It refers to 4th quadrant");
    }
    else
    {
        printf("Invalid input...");
    }

}