#include <stdio.h>

int main()
{

    float a, b;
    scanf("%f %f", &a, &b);

    int c = 5;
    int d = 2;
    // int sum = a + b;
    // printf("%d + %d = %d \n", a, b, sum);

    // int sub = a - b;
    // printf("%d - %d = %d \n", a, b, sub);

    // int mul = a * b;
    // printf("%d * %d = %d \n", a, b, mul);

    float div = a / b;
    float r= c / d;
    printf("%f", r);
    // printf("%0.1f / %0.1f = %0.2f \n", a, b, div);

    return 0;
}