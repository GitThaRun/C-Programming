#include<stdio.h>
#include<conio.h>
void main()
{
    int a[50],n,max;
    int i;
    clrscr();
    printf("ENTER SIZE OF ARRAY:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("ENTER ELEMNTS :");
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[0]<a[i])
        {
            a[0]=a[i];
        }
    }
    max=a[0];
    printf("largest element is:%d",max);
    getch();
}