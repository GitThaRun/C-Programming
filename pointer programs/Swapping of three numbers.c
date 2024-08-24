#include<stdio.h>

void Swap(int *a,int *b,int *c);

int main()
{
    int a, b, c;

    printf("Enter a :: ");
    scanf("%d",&a);
    printf("\nEnter b :: ");
    scanf("%d",&b);
    printf("\nEnter c :: ");
    scanf("%d",&c);

    printf("\nValues Before swapping :: \n");
    printf("a = %d b = %d c = %d\n",a,b,c);

    Swap(&a, &b, &c);

    printf("\nValues After swapping :: \n");
    printf("a = %d b = %d c = %d\n",a,b,c);

    return 0;
}
void Swap(int *a,int *b,int *c)
{

    int temp;

    // swapping in cyclic order
    temp = *b;
    *b = *a;
    *a = *c;
    *c = temp;
}
