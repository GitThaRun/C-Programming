#include<stdio.h>
#include<conio.h>
void main()
{
    int n,num,sum=0,digit;
    clrscr();
    printf("enter a number:\n");
    scanf("%d",&n);
    num=n;
    while(num!=0)
    {
        digit=num%10;
        sum=sum+digit;
        num=num/10;
    }
    printf("the sum of digits of %d=%d\n",n,sum);
    getch();
}