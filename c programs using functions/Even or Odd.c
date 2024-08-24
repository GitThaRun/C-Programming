#include<stdio.h>
#include<conio.h>
int evenodd(int n1)
{
    return(n1&1);
}
void main()
{
    int n1;
    clrscr();
    printf("INPUT ANY NUMBER:");
    scanf("%d",&n1);
    if(evenodd(n1))
    {
        printf("THE ENTERED NUMBER IS ODD");
    }
    else
    {
        printf("THE ENTERED NUMBER IS EVEN");
    }
    getch();
}