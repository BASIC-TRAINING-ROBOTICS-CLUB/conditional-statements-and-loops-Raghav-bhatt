#include <stdio.h>

int main() 
{
    int n, a1 = 0, a2 = 1, nextTerm;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    
    for (int i=1; i<=n; ++i) 
    {
        printf("%d ", a1);
        nextTerm = a1 + a2;
        a1 = a2;
        a2 = nextTerm;
    }
    printf("\n");
}