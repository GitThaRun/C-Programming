#include<stdio.h>
#include<conio.h>
void main()
{
    int choice;
    clrscr();
    printf("enter any number between(1to7):");
    scanf("%d",&choice);
    printf("\n");
    switch(choice)
    {
        case 1:
        printf("TODAY IS MONDAY");
        break;
        case 2:
        printf("TODAY IS TUESDAY");
        break;
        case 3:
        printf("TODAY IS WEDNSDAY");
        break;
        case 4:
        printf("TODAY IS THURSDAY");
        break;
        case 5:
        printf("TODAY IS FRIDAY");
        break;
        case 6:
        printf("TODAY IS SATURDAY");
        break;
        case 7:
        printf("TODAY IS SUNDAY");
        break;
        default:
        printf("INVALID  WEEK DAY NUMBER\n");
    }
    getch();
}