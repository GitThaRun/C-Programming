#include<stdio.h>
#include<conio.h>
void swap(int*,int*);
void main()
{
int x,y;
printf("ENTER TWO NUMBERS:\n");
scanf("%d%d",&x,&y);
printf("BEFORE SWAPPING x=%d and y=%d\n",x,y);
swap(&x,&y);
printf("AFTER SWAPPING x=%d and y=%d\n",x,y);
}
void swap(int*a,int*b)
{
    int temp;
    temp=*b;
    *b=*a;
    *a=temp;
    
}