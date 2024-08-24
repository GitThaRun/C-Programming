#include<stdio.h>
#include<conio.h>
void main()
{
    int n1,n2;
    printf("enter two numbers:\n");
    scanf("%d%d",&n1,&n2);
    if(n1>n2)
    printf("first number is greater",n1,n2);
    if(n2>n1)
    printf("second number is greater",n1,n2);
    if(n1==n2)
    printf("two numbers are equal",n1,n2);
    getch();
}