#include <stdio.h>

// Example to declare and use functions
float sum(float num1, float num2);

int main(void)
{
    float num1, num2;

    scanf("%f", &num1);
    scanf("%f", &num2);

    printf("%f \n", sum(num1, num2));

    return 0;
}

float sum(float num1, float num2)
{
    return num1 + num2;
}