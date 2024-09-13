#include <stdio.h>

int main()
{
    int a,b,c;
    printf("Enter the three numbers to find which one is biggest :");
    scanf("%d" "%d" "%d" ,&a,&b,&c);

    if (a>b && a>c)
    {
        printf("a is greatest");
    }
    else if (b>a && b>c)
    {
        printf("b is greatest");
    }
    else if (c>a && c>a)
    {
        printf("c is greatest");
    }
    else
    {
        printf("Some of the values are same.");
    }
}