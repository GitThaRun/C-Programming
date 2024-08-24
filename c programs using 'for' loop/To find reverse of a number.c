#include<stdio.h>
#include<conio.h>
void main()
{
    int n,r;
    clrscr();
    printf("enter a number:\n");
    scanf("%d",&n);
    for(r=0;n>0;n=n/10)
    {
        r=r*10;
        r=r+n%10;
    }
    printf("the reversed number=%d",r);
    getch();
}