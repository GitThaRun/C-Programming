#include <stdio.h>
#include <math.h>
/* Function declarations */ 
int reverse(int num);
int isPalindrome(int num);
int main()
{
    int num;
    printf("Enter any number: ");
    scanf("%d", &num);
    
    if(isPalindrome(num) == 1)
    {
        printf("%d is palindrome number.\n", num);
    }
    else
    {
        printf("%d is NOT palindrome number.\n", num);
    }
    
    return 0;
}
/*Function to check whether a number is palindrome or not
 This function returns 1 if the number is palindrome otherwise 0*/
int isPalindrome(int num)
{
    /** Check if the given number is equalits reverse.*/
    if(num == reverse(num))
    {
        return 1;
    }
    
    return 0;
}
int reverse(int num)
{
    int digit=(int)log10(num);
    if(num==0)
    return 0;
    return((num%10*pow(10,digit))+reverse(num/10));
}