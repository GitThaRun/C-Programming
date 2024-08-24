#include<stdio.h>
#include<conio.h>
void main()
{
    int n1,n2;
    clrscr();
    printf("enter two values:\n");
    scanf("%d%d",&n1,&n2);
    if(n1>n2)
    printf("n1 is greater\n");
    else if(n2>n1)
    printf("n2 is greater\n");
    else
    printf("both are equal\n");
    getch();
}