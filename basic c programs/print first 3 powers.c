#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    int num,a,b,c;
    clrscr();
    printf("enter your number:\n");
    scanf("%d",&num);
    a=pow(num,1);
    b=pow(num,2);
    c=pow(num,3);
    printf("the powers are:\n");
    printf("%d,%d,%d\n",a,b,c);
    getch();
}