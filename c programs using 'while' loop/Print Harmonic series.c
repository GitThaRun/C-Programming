#include<stdio.h>
#include<conio.h>
void main()
{
    int n;
    float i=1,sum=0;
    printf("enter a nummber:");
    scanf("%d",&n);
    printf("harmonic series");
    while(i<=n)
    {
        if(i!=1)
        printf("+");
        sum+=(1/i);
        if(i==1)
        {
            printf("1");
        }
        else
        {
            printf("1/%g",i);
        }
        i++;
    }
    printf("=%g",sum);        //%g represents the decimal format of the answer, depending upon whose length is smaller, comparing between %e and %f.
    getch();
}