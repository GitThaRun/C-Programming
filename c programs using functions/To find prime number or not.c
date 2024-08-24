#include<stdio.h>
int prime0rnot(int);
int main()
{
    int n,prime;
    clrscr();
    printf("INPUT A NUMBER:");
    scanf("%d",&n);
    prime=primeornot(n);
    if(prime==1)
    printf("THE NUMBER %d IS A PRIME NUMBER\n",n);
    else
    printf("THE NUMBER %d IS NOT A PRIME NUMBER\n",n);
    return 0;
}
int primeornot(int n)
{
    int i=2;
    while(i<=n/2)
    {
        if(n%i==0)
        return 0;
        else
        i++;
    }
    return 1;
}