#include<stdio.h>
#include<conio.h>
void main()
{
    char c;
    clrscr();
    printf("ENTER ANY CHARACTER OF RAINBOW COLOUR:\n");
    scanf("%c",&c);
    switch(c)
    {
        case 'v':
        printf("VIOLET");
        break;
        case 'V':
        printf("VIOLET");
        break;
        case 'i':
        printf("INDIGO");
        break;
        case 'I':
        printf("INDIGO");
        break;
        case 'b':
        printf("BLUE");
        break;
        case 'B':
        printf("BLUE");
        break;
        case 'g':
        printf("GREEN");
        break;
        case 'G':
        printf("GREEN");
        break;
        case 'y':
        printf("YELLOW");
        break;
        case 'Y':
        printf("YELLOW");
        break;
        case 'o':
        printf("ORANGE");
        break;
        case 'O':
        printf("ORANGE");
        break;
        case 'r':
        printf("RED");
        break;
        case 'R':
        printf("RED");
        break;
        default:
        printf("INVALID CHARACTER\n");
    }
    getch();
}