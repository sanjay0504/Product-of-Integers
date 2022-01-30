#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a,b;
    printf("Enter the first integer: ");
    scanf("%d", &a);
    printf("Enter the second integer: ");
    scanf("%d", &b);

    int product;

    product = a*b;
    printf("%d x %d = %d", a,b,product);

    return 0;
}
