#include<stdio.h>
#include<conio.h>
void main()
{
    int n,rem,sum=0,temp;
    clrscr();
    printf("enter a number:\n");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        rem=n%10;
        sum=sum+(rem*rem*rem);
        n=n/10;
    }
    if(temp==sum)
    printf("%d is an armstrong number\n",temp);
    else
    printf("%d is not an armstrong number\n",temp);
    getch();
}