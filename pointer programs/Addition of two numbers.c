#include <stdio.h>
void main()
{
    int num1, num2, sum;
    int *ptr1, *ptr2;
    clrscr();

    ptr1 = &num1; // ptr1 stores the address of num1
    ptr2 = &num2; // ptr2 stores the address of num2

    printf("Enter any two numbers: \n");
    scanf("%d%d", ptr1, ptr2);

    sum = *ptr1 + *ptr2;

    printf("Sum = %d", sum);

    getch();
}
