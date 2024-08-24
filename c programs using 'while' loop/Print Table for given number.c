#include<stdio.h>
#include<conio.h>
void main()
{
    int i,num;
    clrscr();
    printf("ENTER NUMBER TO PRINT TABLE:\n");
    scanf("%d",&num);
    i=1;
    while(i<=10)
    {
        printf("%d * %d = %d\n",num,i,(num*i));
        i++;
    }
    getch();
}