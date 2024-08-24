#include<stdio.h>
#include<conio.h>
int main()
{
    int num1,num2,max;
    printf("enter two numbers:\n");
    scanf("%d%d",&num1,&num2);
    max=(num1>num2)?(num1):(num2);
    printf("the largest among %d and %d is %d",num1,num2);
    return 0;
    
}


