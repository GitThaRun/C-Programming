#include <stdio.h>
int main()
{
    int num, n, remainder, reverse = 0;
    printf("Enter any number:");
    scanf("%d", &num);
    n = num;
    while (num != 0)
    {
        remainder = n % 10; // Takes last digit
        reverse = reverse * 10 + remainder;
        num = n / 10;
    }
    if (num == reverse)
    {
        printf("%d is a Palindrome Number\n");
    }
    else
    {
        printf("%d is not a Palindrome Number\n");
    }
    return 0;
}