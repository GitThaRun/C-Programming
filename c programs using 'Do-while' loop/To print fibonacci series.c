#include<stdio.h>
#include<conio.h>
void main()
{
    int n,f1=1,f2=1,i=1,f=0;
    clrscr();
    printf("ENTER A NUMBER TO PRINT:");
    scanf("%d",&n);
    printf("THE FIBONACCI SERIES ARE:\n",f);
    do
    {
        i++;
        printf("%d ",f);
        f1=f2;
        f2=f;
        f=f1+f2;
    }
    while(i<=n);
    getch();
}