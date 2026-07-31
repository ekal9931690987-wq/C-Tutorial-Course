#include <stdio.h>

int main(int argc, char const *argv[])
{
    int c, f;
    printf("Enter temperature in Celsius c\n ");
    scanf("%d", &c);
    f = (c * 9/5) + 32;
    printf("Temperature in Fahrenheit: %d", f);
    return 0;
}
