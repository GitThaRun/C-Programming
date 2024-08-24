#include<stdio.h>
#include<conio.h>
void main()
{
    char a;
    clrscr();
    printf("pres any key:\n");
    scanf("%c",&a);
    if(a>=65&&a<90)
    {
        printf("AN UPPER CASE LETTER");
    }
    else
    {
        if(a>=97&&a<122)
        {
            printf("A LOWER CASE LETTER");
        }
        else
        {
            if(a>=48&&a<=57)
            {
                printf("A DIGIT");
            }
            else
            {
                printf("A SPECIAL SYMBOL\n");
                
            }
        }
    }
    getch();
}