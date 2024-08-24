#include<stdio.h>
#include<conio.h>
void main()
{
    int n,t1=0,t2=1,fib;
    clrscr();
    printf("enter a positive a number:\n");
    scanf("%d",&n);
    printf("fibonacci series up to number %d is %d %d ",n,t1,t2);
    fib=t1+t2;
    while(fib<=n)
    {
        printf("%d ",fib);
        t1=t2;
        t2=fib;
        fib=t1+t2;
    }
}