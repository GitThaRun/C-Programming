#include<stdio.h>
void naturalnum(int lowerlimit,int upperlimit);
int main()
{
    int lowerlimit,upperlimit;
    clrscr();
    printf("ENTER LOWERLIMIT:");
    scanf("%d",&lowerlimit);
    printf("ENTER UPPERLIMIT:");
    scanf("%d",&upperlimit);    
    printf("NATURAL NUMBERS FROM %d TO %d ARE:\n",lowerlimit,upperlimit);
    naturalnum(lowerlimit,upperlimit);
    return 0;
}
void naturalnum(int lowerlimit,int upperlimit)
{
    if(lowerlimit>upperlimit)
    return;
    printf("%d , ",lowerlimit);
    naturalnum(lowerlimit+1,upperlimit);
}