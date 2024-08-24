#include<stdio.h>
#include<conio.h>
void main()
{
    int i,a,n;
    clrscr();
    printf("enter the number to print table:\n");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        a=n*i;
        printf("%d*%d=%d\n",n,i,n*i);
    }
    getch();
}