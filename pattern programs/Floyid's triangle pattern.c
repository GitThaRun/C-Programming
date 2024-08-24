#include<stdio.h>
#include<conio.h>
void main()
{
    int nrows,i,j,number=1;
    clrscr();
    printf("enter number of rows:\n");
    scanf("%d",&nrows);
    for(i=1;i<=nrows;i++)
    {
        for(j=1;j<=i;++j)
        {
            printf("%d",number);
            number++;
        }
        printf("\n");
    }
    getch();
}