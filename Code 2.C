#include<stdio.h>

int main()
{
    int a, b;

    a = 10;
    b = 20;

    printf("Before swaping: a = %d, b = %d", a, b);

    a = b;
    b = a;

    printf("\nAfter swapping: a = %d, b = %d", a, b);

    return 0;
}
