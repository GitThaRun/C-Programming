#include<stdio.h>
#include<conio.h>
void main()
{
    int t,r,a[10][10],b[10][10],c[10][10];
    int i,j;
    clrscr();
    printf("enter number of rows and coloumns in matrtix: \n");
    scanf("%d%d",&t,&r);
    //multiplication done here//
    printf("enter %d elements in matrix:\n",t*r,t,r);
    for(i=0;i<t;i++)
     
     for(j=0;j<r;j++)
     scanf("%d",&a[i][j]);
     
     printf("the original matrix is :\n");
     for(i=0;i<t;i++) 
     {
      for(j=0;j<r;j++)
       printf("%d\t",a[i][j]);
       printf("\n");
     }
       for(i=0;i<t;i++)
       
        for(j=0;j<r;j++)
        c[j][i]=a[i][j];
        
         printf("the transpose of matrix is:\n");
          for(i=0;i<t;i++)
           {
           for(j=0;j<r;j++)
           printf("%d\t",c[i][j]);
           printf("\n");
           }
           getch();
           
}