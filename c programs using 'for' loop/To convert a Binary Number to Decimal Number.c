#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    int binum,rem,n,i,decimal;
    clrscr();
    printf("enter a binary number:\n");
    scanf("%d",&binum);
    i=0;
    decimal=0;
    for(n=binum;n!=0;n=n/10)
    {
        rem=n%10;
        decimal=decimal+rem*pow(2,i);
        i++;
    }
    printf("decimal number=%d",decimal);
    getch();
}