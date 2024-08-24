#include<stdio.h>
#include<conio.h>
void main()
{
    int age,temp=0;
    clrscr();
    printf("enter your age:\n");
    scanf("%d",&age);
    if(age>=18&&age<100)
    {
    printf("YOU ARE ELIGIBLE FOR VOTING\n");
    }
     else if(age<18)
     {
    temp=18-age;
    printf("YOU ARE NOT ELIGIBLE FOR VOTING\n");
    printf("WAIT %d YEARS TO CAST YOUR VOTE\n",temp);
     }
    getch();
}