#include <stdio.h>

int main()
{
    char a;
    printf("Enter the character to check it is a vowel or not:");
    scanf("%c",&a);

    if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u')
    {
        printf("character is a vowel");
    }
    else
    {
        printf("character is a constant");
    }
}

