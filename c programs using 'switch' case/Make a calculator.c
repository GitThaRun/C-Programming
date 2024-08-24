#include<stdio.h>
#include<conio.h>
void main()
{
    char operator;
    int a,b,result=0;
    clrscr();
    printf("enter two numbers and operator:\n");
    printf("example: 1+3\n");
    scanf("%d%c%d",&a,&operator,&b);
    switch(operator)
    {
        case '+':
        {
        result= a + b;
        printf("addition=%d",result);
        break;
    }
        case '-':
        {
        result= a - b;
        printf("substraction=%d",result);
        break;
        }
        case '*':
        {
         result= a * b;
         printf("multiplication=%d",result);
         break;
        }
        case '/':
        {
            result= a / b;
            printf("division=%d",result);
            break;
        }
        case '%':
        {
            result=a % b;
            printf("modulus=%d",result);
            break;
        }
        default:
        printf("invalid operator\n");
        getch();
    }
}