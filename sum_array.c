#include <stdio.h>

int main()
{
    int r , i , sum = 0;
    printf("Enter the number of elements int the :");
    scanf("%d",&r);

    int arr[r];
    
    for (i = 0; i < r; i++)
    {
        printf("Element %d :",i+1);
        scanf("%d",&arr[i]);
    }
    for (i = 0; i < r; i++)
    sum += arr[i];
    {
        printf("Sum of array elements :%d\n",sum);
    }
}