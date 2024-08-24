#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,r;
    clrscr();
    printf("ENTER NUMBER TO PRINT:");
    scanf("%d",&r);
    for(i=0;i<=r;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    getch();
}