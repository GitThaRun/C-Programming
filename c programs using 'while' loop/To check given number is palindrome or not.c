#include<stdio.h>
#include<conio.h>
void main()
{
    int n,reversenum,lastdigit,num;
    clrscr();
    printf("enter a number:\n");
    scanf("%d",&num);
    n=num;
    reversenum=0;
    while(n>0)
    {
    lastdigit=n%10;
    reversenum=(reversenum*10)+lastdigit;
    n=n/10;
}
    if(num==reversenum)
    printf("%d is a palindrome number\n",num);
    else
    printf("%d is not a palindrome number\n",num);
    getch();
}