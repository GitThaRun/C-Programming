#include<stdio.h>
#include<conio.h>
void main()
{
    int n1,n2,n3,max;
    clrscr();
    printf("enter three values:\n");
    scanf("%d%d%d",&n1,&n2,&n3);
    max=(n1>n2)?(n1>n3?n1:n3):(n2>n3?n2:n3);
    printf("the largest number among %d,%d and %d is %d",n1,n2,n3);
    getch();
}