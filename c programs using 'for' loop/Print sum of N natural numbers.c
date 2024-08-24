#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n,sum=0;
    printf("ENTER THE NUMBER TO PRINT :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    sum=sum+i;
    printf("%d \n",i);
    }
    printf("the sum is:%d \n",sum);
    getch();
}