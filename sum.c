#include <stdio.h>

int main()
{
    int number, digit, count = 0, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &number);
    
    while (number != 0)
    {
        digit = number % 10;
        sum += digit;
        count++;
        number /= 10;
    }    
    printf("Total digits: %d\n", count);
    printf("Sum of digits: %d\n", sum);
}
