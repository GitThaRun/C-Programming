#include<stdio.h>
#include<conio.h>
void main()
{
    float a,b,celsius,farenheit;
    int r;
    clrscr();
    printf("1-->FOR FARENHEIT TO CELSIUS\n");
    printf("2-->FOR CELSIUS TO FARENHEIT\n");
    printf("enter your choice:\n");
    scanf("%d",&r);
    switch(r)
    {
        case 1:
        printf("enter the temperature in farenheit:\n");
        scanf("%f",&a);
        celsius=5*(a-32)/9;
        printf("the temperature in celsius=%f\n",celsius);
        break;
        case 2:
        printf("enter temperature in celsius:\n");
        scanf("%f",&b);
        farenheit=((9*b)/5)+32;
        printf("the temperature in farenheit=%f\n",farenheit);
        break;
        default:
        printf("wrong choice\n");
    }
    getch();
}