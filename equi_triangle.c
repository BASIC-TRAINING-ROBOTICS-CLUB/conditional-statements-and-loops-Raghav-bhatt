#include <stdio.h>

int main()
{
    int a,b,c;
    printf("Enter the three sides of an triangle :");
    scanf("%d" "%d" "%d" ,&a,&b,&c);

    if (a == b && b == c)
    {
        printf("Triangle is equilateral");
    }
    else
    {
        printf("Tringle is not equilateral");
    }
}