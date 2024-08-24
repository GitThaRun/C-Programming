#include<stdio.h>
#include<conio.h>
void main()
{
    char c;
    clrscr();
    printf("enter any alphabet:\n");
    scanf("%c",&c);
    switch(c)
    {
        case 'a':
        printf("IT IS A VOWEL");
        break;
        case 'e':
        printf("IT IS A VOWEL");
        break;
        case 'i':
        printf("IT IS A VOWEL");
        break;
        case 'o':
        printf("IT IS A VOWEL");
        break;
        case 'u':
        printf("IT IS A VOWEL");
        break;
        case 'A':
        printf("IT IS A VOWEL");
        break;
        case 'E':
        printf("IT IS A VOWEL");
        break;
        case 'I':
        printf("IT IS A VOWEL");
        break;
        case 'O':
        printf("IS IS A VOWEL");
        break;
        case 'U':
        printf("IT IS A VOWEL");
        break;
        default:
        printf("IT IS  A CONSONANT\n");
        break;
    }
    getch();
}