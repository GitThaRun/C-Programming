#include<stdio.h>
#include<conio.h>
void main()
{
    float f,c;
    printf("enter the temperature in forenheit:\n");
    scanf("%f",&c,&f);
    c=(5*rp(f-32)/9);
    printf("the given in temperature inn celsius is %f",c,f);
    getch();
}