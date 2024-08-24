#include<stdio.h>
#include<conio.h>
void main(){
    int a,b;
    clrscr();
    printf("Enter Any Two Numbers:\n");
    scanf("%d %d",&a,&b);
    printf("a<b:%d\n",a<b);
    printf("a>b:%d\n",a>b);
    printf("a==b:%d\n",a==b);
    printf("a<=b:%d\n",a<=b);
    printf("a>=b:%d\n",a>=b);
    printf("a!=b:%d\n",a!=b);
    getch();
}