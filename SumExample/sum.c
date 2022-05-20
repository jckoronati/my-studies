#include <stdio.h>

float sum();

int main(void) {
    float num1, num2, sum;

    scanf("%f",&num1);
    scanf("%f",&num2);

    sum = num1 + num2;

    printf("%f \n",sum);

    return 0;
}