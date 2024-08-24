#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    float a,b,c;
    float discriminant;
    float root1,root2,imaginary;
    clrscr();
    printf("ENTER VALUES:\n");
    scanf("%f%f%f",&a,&b,&c);
    discriminant=(b*b)-(4*a*c);
    if(discriminant>0)
    {
        root1=(-b+sqrt(discriminant))/(2*a);
        root2=(-b-sqrt(discriminant))/(2*a);
        printf("TWO DISTINCT AND REAL ROOTS EXISTS:%.2f and %.2f",root1,root2);
    }
    else if(discriminant==0)
    { 
        root1=root2=-b/(2*a);
    printf("TWO EQUAL AND REAL ROOTS EXISTS:%.2f and %.2f",root1,root2);
    }
    else if(discriminant<0)
    {
        root1=root2=-b/(2*a);
        imaginary=sqrt(-discriminant)/(2*a);
        printf("TWO IMAGINARY ROOTS EXISTS:%.2f + %.2f and %.2f - %.2f",root1,imaginary,root2,imaginary);
        getch();
    }
}