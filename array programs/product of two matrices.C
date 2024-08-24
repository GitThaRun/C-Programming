#include<stdio.h>
#include<conio.h>
void main()
{
  int a[5][5],b[5][5],c[5][5],i,j,k,r1,c1,r2,c2;
  clrscr();
  printf("\n  Enter the row and column of matrix 1 :");
  scanf("%d %d",&r1,&c1);
  printf("\n  Enter the row and column of matrix 2 :");
  scanf("%d %d",&r2,&c2);
  if(c1!=r2)
  {
      printf("\n  Matrix mutiplication is not possible");
      printf("\n\n  Column of 'matrix 1' must be same as row of 'matrix 2'");
  }
  else
  {
      printf("\n  Enter the matrix 1 :\n\n");
      for(i=0;i<r1;i++)
      for(j=0;j<c1;j++)
	   scanf("%d",&a[i][j]);
      printf("\n  Enter the matrix 2 :\n\n");
      for(i=0;i<r2;i++)
      for(j=0;j<c2;j++)
	   scanf("%d",&b[i][j]);
      for(i=0;i<r1;i++)
      {
      for(j=0;j<c2;j++)
      {
	   c[i][j]=0;
	   for(k=0;k<c1;k++)
	   {
	   c[i][j]=c[i][j]+a[i][k]*b[k][j];
	   }
      }
}
  printf("\n  The product matrix is :\n\n");
  for(i=0;i<r1;i++)
  {
      for(j=0;j<c2;j++)
      {
	   printf("  %d  ",c[i][j]);
      }
       printf("\n");
  }
  }
  getch();
}