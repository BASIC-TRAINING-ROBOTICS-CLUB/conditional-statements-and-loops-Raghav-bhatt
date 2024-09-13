#include <stdio.h>

int main()
{
    int a,b,c;
    printf("Enter the sides :");
    scanf("%d" "%d" "%d",&a,&b,&c);

    if ((a*a + b*b) == c*c)
    {
        printf("It is an right angle triangle");
    }
    else
    {
        printf("It's not an right angle triangle");
    }
}