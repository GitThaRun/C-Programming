#include<stdio.h>
#include<conio.h>
void main()
{
    int a[20],i,j,k,s;
    clrscr();
    printf("ENTER SIZE OF ARRAY:");
    scanf("%d",&s);
    printf("ENTER ELEMENTS:\n");
    for(i=0;i<s;i++)
    {
    scanf("%d",&a[i]);
    }
    for(i=0;i<s;i++)
    {
        for(j=i+1;j<s;j++)
        {
            if(a[j]==a[i])
            {
                for(k=j;k<s;k++)
                {
                    a[k]=a[k+1];
                }s--;
                j++;
            }
        }
    }
    printf("ARRAY AFTER DELETING DUPLICATE INTEGERS:");
    for(i=0;i<s;i++)
    {
        printf("%d ",a[i]);
    }
    getch();
}