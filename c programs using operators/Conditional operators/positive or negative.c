#include<stdio.h>
#include<conio.h>
void main()
{
    int a;
    printf("enter a number:\n");
    scanf("%d",&a);
    (a>0)?printf("%d is a positive number\n"):printf("%d is a negative number");
    getch();
}