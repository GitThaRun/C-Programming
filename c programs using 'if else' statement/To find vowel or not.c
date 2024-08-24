#include<stdio.h>
#include<conio.h>
void main()
{
    char t;
    clrscr();
    printf("enter any character:\n");
    scanf("%c",&t);
    if(t=='a'||t=='e'||t=='i'||t=='o'||t=='u'||t=='A'||t=='E'||t=='I'||t=='O'||t=='U')
    printf("ENTERED CHARACTER IS A VOWEL\n");
    else
    printf("ENTERED CHARACTER IS NOT A VOWEL\n");
    getch();
}