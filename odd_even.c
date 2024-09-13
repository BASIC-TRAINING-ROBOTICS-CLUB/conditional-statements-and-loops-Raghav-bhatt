#include <stdio.h>

int main()
{
   int a ;
   printf("Enter the number to check whether it is odd or even :");
   scanf("%d",&a);

   if (a == 0)
   {
        printf("Number is neither even nor odd");
   }
   else if (a%2 == 0)
   {
        printf("Number is even");
   }
   else
   {
        printf("Number is odd");
   } 
}