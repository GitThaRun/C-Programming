#include<stdio.h>
#include<conio.h>

void main()
{
   int arr[50], search, n, i;
 
   printf("Enter how many elements in array:\n");
 
   scanf("%d",&n);
 
   printf("\nPlease enter %d numbers or integers one by one", n);
 
   for (i = 0; i < n; i++){
       
       scanf("%d", &arr[i]);
   }
 
   printf("\nPlease enter the number you want to search");
 
   scanf("%d", &search);
 
   for (i = 0; i < n; i++)
 
   {
 
      if (arr[i] == search)  
 
      {
 
         printf("\n%d is present at location %d\n", search, i+1);
         break;
      }
 
   }
 
   if (i == n)
       {
      printf("%d is not available in the array.\n", search);
       }
}