#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,p;
    long power=1;
    clrscr();
    printf("enter the number:\n");
    scanf("%d",&n);
    printf("enter the power:\n");
    scanf("%d",&p);
    for(i=1;i<=p;i++)
    power=power*n;
    printf("the number %d raised to power %d is %d",n,p,power);
    getch();
}