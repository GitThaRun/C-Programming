#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    float a,b,c;
    float discriminant;
    float root1,root2,imaginary;
    clrscr();
    printf("ENTER VALUES OF QUADRATIC EQUATION:\n");
    scanf("%f%f%f",&a,&b,&c);
    discriminant=(b*b)-(4*a*c);
    switch(discriminant>0)
    {
    case 1:
    root1=(-b+sqrt(discriminant))/(2*a);
    root2=(-b-sqrt(discriminant))/(2*a);
    printf("TWO REAL ROOTS EXISTS:%.2f and %.2f",root1,root2);
    break;
    case 0:
    switch(discriminant<0)
    {
        root1=root2=-b/(2*a);
        imaginary=sqrt(discriminant)/(2*a);
        printf("TWO IMAGINARY ROOTS EXISTS:%.2f+i%.2f and %.2f-i%.2f",root1,imaginary,root2,imaginary);
        break;
        case 0:
        root1=root2=-b/(2*a);
        printf("TWO EQUAL AND REAL ROOTS EXISTS:%.2f and %.2f",root1,root2);
        break;
    }
    }
    
    getch();
    
}