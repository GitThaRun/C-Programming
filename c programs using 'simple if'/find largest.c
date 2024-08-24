#include<stdio.h>
#include<conio.h>
void main()
{
    int t,r;
    printf("enter two numbers:\n");
    scanf("%d%d",&t,&r);
    if(t>r)
    printf("the first number is greater\n");
    if(r>t)
    printf("second number is greater\n");
    getch();
}