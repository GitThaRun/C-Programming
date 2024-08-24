#include<stdio.h>
#include<conio.h>
void main()
{
    int marks;
    clrscr();
    printf("ENTER YOUR MARKS OUT OF 100:\n");
    scanf("%d",&marks);
    if(marks>100)
    {
        printf("INVALID MARKS\n");
    }
    else
    {
        switch(marks/10)
        {
        case 10:
        case 9:
        /*marks between 90-100*/
        printf("YOUR GRADE IS:A");
        break;
        case 8:
        /*marks between 80-89*/
        printf("YOUR GRADE IS:B");
        break;
        case 7:
        /*marks between 70-79*/
        printf("YOUR GRADE IS:C");
        break;
        case 6:
        /*marks between 60-69*/
        printf("YOUR GRADE IS:D");
        break;
        case 5:
        /*marks between 50-59*/
        printf("YOUR GRADE IS:E");
        break;
        case 4:
        /*marks between 40-39*/
        printf("YOUR GRADE IS:F");
        break;
        default:
        /*marks less than 40*/
        printf("YOU ARE FAILED\n");
    }
    }
    getch();
}