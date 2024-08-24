#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n;
    clrscr();
    printf("PRINT ODD NUMBERS TILL:");
    scanf("%d",&n);
    printf("ALL ODD NUMBERS FROM 1 TO %d ARE:\n",n);
    i=3;
    while(i<=n)
    {
        printf("%d ",i);
        i+=2;
    }
    getch();
}