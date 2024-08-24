#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i=1,f=1;
    clrscr();
    printf("ENTER THE NUMBER:");
    scanf("%d",&n);
    while(i<=n)
    {
        f=f*i;
        i++;
    }
    printf("THE FACTORIAL OF %d is:%d",n,f);
    getch();
}