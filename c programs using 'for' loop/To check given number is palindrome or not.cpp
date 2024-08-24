#include<stdio.h>
#include<conio.h>
void main()
{
    int n,temp,r,rev=0;
    clrscr();
    printf("enter any number:");
    scanf("%d",&n);
    temp=n;
    do
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }while(n>0);
    if(rev==temp)
    {
        printf("%d is a palindrome number",temp);
    }
    else
    {
    printf("%d is not a palindrome number",temp);
    }
    getch();
}