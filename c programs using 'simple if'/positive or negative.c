#include<stdio.h>
#include<conio.h>
void main()
{
    int num;
    clrscr();
    printf("enter a number:\n");
    scanf("%d",&num);
    if(num>0)
    printf("the number is positive\n");
    if(num<0)
    printf("the number is negative\n");
    if(num==0)
    printf("the number is zero\n");
    getch();
}