#include <stdio.h>


/* Function declaration */
int sumOfNaturalNumbers(int start, int end);


int main()
{
    int t,r,sum;
    clrscr();
    printf("Enter lower limit: ");
    scanf("%d", &t);
    printf("Enter upper limit: ");
    scanf("%d", &r);
    
    sum = sumOfNaturalNumbers(t,r);
    
    printf("Sum of natural numbers from %d to %d = %d", t,r,sum);
    
    return 0;
}
int sumOfNaturalNumbers(int t, int r)
{
    if(t == r)
        return t;
    else
        return t + sumOfNaturalNumbers(t + 1, r); 
}
