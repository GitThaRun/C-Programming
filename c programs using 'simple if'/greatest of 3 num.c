#include<stdio.h>
#include<conio.h>
void main()
{
    int n1,n2,n3;
    clrscr();
    printf("enter three numbers:\n");
    scanf("%d%d%d",&n1,&n2,&n3);
    if(n1>n2)
    printf("%d is greater than %d and %d\n",n1,n2,n3);
    if(n2>n1>n3)
    printf("%d is greater than %d and %d\n",n1,n2,n3);
    if(n3>n2>n1)
    printf("%d is greater than %d and %d\n",n1,n2,n3);
    getch();
}