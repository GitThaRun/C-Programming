#include<stdio.h>
#include<math.h>
void main()
{
    int s1,s2,s3,s,area;
    printf("enter 3 sides:\n");
    scanf("%d%d%d",s1,s2,s3);
    s=(s1+s2+s3)/2;
    area=(s*(s-s1)*(s-s2)*(s-s3));
    printf("the area of triangle is :%d",area);
}