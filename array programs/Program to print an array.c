#include<stdio.h>
#include<conio.h>
void main()
{
    int a[2][2],i,j;
    clrscr();
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
        printf("enter a[%d][%d] elements:\n",i,j);
        scanf("%d",&a[i][j]);
        }
    }
    printf("printing elements:\n");
        for(i=0;i<2;i++)
        {
            printf("\n");
        for(j=0;j<2;j++)
        {
            printf("%d\t",a[i][j]);
        }
        }
    }