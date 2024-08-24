#include<stdio.h>
#include<conio.h>
int rec(int);
void main()
{
    int n,f;
    clrscr();
    printf("enter a value:");
    scanf("%d",&n);
    f=rec(n);
    printf("The factorial value is:%d",f);
    getch();
}
int rec(int x)
{
    int f;
    if(x==1)
    return 1;
    else
    f=x*rec(x-1);
    return f;
}