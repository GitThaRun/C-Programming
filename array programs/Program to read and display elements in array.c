#include<stdio.h>
#include<conio.h>
void main()
{
    int arr[20];
    int i,n;
    printf("enter size of array:");
    scanf("%d",&n);
    printf("enter %d elements in array:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("elements in array are:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    getch();
}