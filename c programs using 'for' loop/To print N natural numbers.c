#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i;
    clrscr();
    printf("enter a number to show:\n");
    scanf("%d",&n);
    printf("numbers from 1 to %d are:\n",n);
    for(i=1;i<=n;i++)
    printf("%d\n",i);
    getch();
}