#include<stdio.h>
#include<conio.h>
main()
{
    int a;
    printf("enter a number:\n");
    scanf("%d",&a);
    (a%2==0)?printf("%d is an even number\n",a):printf("%d is a odd number\n",a);
    getch();
}
