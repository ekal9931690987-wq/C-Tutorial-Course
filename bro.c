#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a, b;

    printf("enter a number a\n");
    scanf("%d", &a);

    printf("enter a number b\n");
    scanf("%d", &b);

    printf("The sum is %d\n", a+b );
    printf("The difference is %d\n", a-b );
    printf("The product is %d\n", a*b );
    printf("The quotient is %d\n", a/b );
    printf("The remainder is %d\n", a%b );

    return 0;
}
