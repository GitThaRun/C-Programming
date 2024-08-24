#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n;
    clrscr();
    printf("PRINT NATURAL NUMBERS UPTO:\n");
    scanf("%d",&n);
    i=1;
    while(i<=n)
    {
        printf("%d\n",i);
        i++;
    }
    getch();
}