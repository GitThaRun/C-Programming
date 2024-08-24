#include<stdio.h>
#include<conio.h>
void main()
{
    int n,r,temp,res=0;
    printf("enter a number");
    scanf("%d",&n);
    temp=n;
    do
    {
        r=temp%10;
        res=res*10+r;
        temp=temp/10;
    }
    while(temp!=0);
    if(res==n)
    {
        printf("%d is a palindrome",n);
    }
    else
    {
        printf("%d is not a palindrome",n);
    }
    getch();
}