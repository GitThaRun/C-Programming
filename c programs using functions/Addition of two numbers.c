#include<stdio.h>
#include<conio.h>
#include<math.h>
int add(int,int);
void main()
{
    int x,y,z;
    clrscr();
    printf("ENTER TWO VALUES:");
    scanf("%d%d",&x,&y);
    z=add(x,y);
    printf("THE RESULT IS %d",z);
    getch();
}
add(int a,int b)
{
    int c;
    c=a+b;
    return(c);
}