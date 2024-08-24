#include<stdio.h>
#include<conio.h>
void main()
{
    char ch='A',s='a';
    clrscr();
    printf("ALPHABETS IN:\n");
    printf("Upper Case:\n");
    while(ch<='Z')
    {
        printf("%c ",ch);
        ch++;
    }
    printf("\nLower case:\n");
    while(s<='z'){
        printf("%c ",s);
        s++;
    }
    getch();
}