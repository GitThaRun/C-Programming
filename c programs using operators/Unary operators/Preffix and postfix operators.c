#include<stdio.h>
#include<conio.h>
void main()
{
    int a,m;
    printf("enter a value\n");
    scanf("%d",&a,&m);
    m=++a;
    printf("after preincrement value of a and m\n are %d%d\n",a,m);
    m=a++;
    printf("after postincrement value of a and m\n are %d%d\n",a,m);
    
    
}