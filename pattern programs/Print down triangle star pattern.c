#include<stdio.h>
#include<conio.h>
void main()
{
    int x,y,n,k;
    clrscr();
    printf("ENTER NUMBER OF ROWS:");
    scanf("%d",&n);
    for(x=n;x>=1;x--)
    {
        for(y=n;y>x;y--)
        {
            printf(" ");
        }
        for(k=1;k<(x*2);k++)
        {
            printf("*");
        }
        printf("\n");
    }
    getch();
}