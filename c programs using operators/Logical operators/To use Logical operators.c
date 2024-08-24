#include <stdio.h>
#include<conio.h>
void main()
{

    int a = 25, b = 5;
    if(a>0 && b>0){
        printf("Both values are greater than zero");
    }
    else{
            printf("Both values are less than zero");
        }
    printf("a || b : %d\n", a || b);
    if(a>0||b>0){
        printf("One of value is greater than zero");
    }
    else{
        printf("Both are less than zero");
    }
    printf("!a: %d\n", !a);
}
