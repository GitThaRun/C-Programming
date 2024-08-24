#include<stdio.h>
#include<conio.h>
void main()
{
    int m,p,c,e,b,s;
    float avg;
    clrscr();
    printf("NAME:TARUN\n");
    printf("PIN NUM:1034\n");
    printf("enter your marks\n");
    scanf("%d%d%d%d%d%d",&m,&p,&c,&e,&b,&s);
    avg=(m+p+c+e+b+s)/6;
    printf("your percentage=%f\n",avg);
    if(avg>=90)
    printf("GRADE A\n");
    else if(avg>=70)
    printf("GRADE B\n");
    else if(avg>=50)
    printf("GRADE C\n");
    else if(avg>30)
    printf("GRADE D\n");
    else if(avg<30)
    printf("FAILED\n");
    getch();
}