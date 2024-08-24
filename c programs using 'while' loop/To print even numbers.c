#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n;
    clrscr();
    printf("PRINT EVEN NUMBERS TILL:");
    scanf("%d",&n);
    printf("ALL EVEN NUMBERS FROM 1 TO %d ARE:\n",n);
    i=2;
    while(i<=n)
    {
        printf("%d ",i);
        i+=2;
    }
    getch();
}
    
