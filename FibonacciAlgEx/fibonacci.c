#include <stdio.h>

int main()
{
    int count = 1, firstValue = 0, secondValue = 1, auxiliary, value;

    scanf("%d", &value);

    while (count <= value)
    {
        printf("%d ", firstValue);
        auxiliary = firstValue + secondValue;
        firstValue = secondValue;
        secondValue = auxiliary;
        count++;
    }

    printf("\n");
    return 0;
}

// This algorithm are used on course: https://www.udemy.com/course/curso-completo-de-logica-e-programacao/