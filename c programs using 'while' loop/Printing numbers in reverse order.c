#include<stdio.h>
#include<conio.h>
void main()
{
    int i;
    clrscr();
    printf("ENTER STARTING VALUE:");
    scanf("%d",&i);
    while(i>=1)
    {
        printf("%d\n",i);
        i--;
    }
    getch();
}