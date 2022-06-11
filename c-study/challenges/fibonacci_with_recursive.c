#include <stdio.h>
#include <stdlib.h>

void createFibonacciSequence(int value);

struct fibonacci
{
    int value;
    struct fibonacci *next;
};

typedef struct fibonacci F;

F *list;

void createFibonacciSequence(int value)
{
    int count = 0, handleValue = 0;

    F *fibonacciSequence = (F *)malloc(sizeof(F));

    for (size_t i = 0; i < value; i++)
    {
        if (i == 0 || i == 1) {
            fibonacciSequence->value = i;
            fibonacciSequence->next = list;
            list = fibonacciSequence;
            continue;
        }

        fibonacciSequence->value = list->value + list->next->value;
        fibonacciSequence->next = list;
        list = fibonacciSequence;
    }
}

void prints(F *auxiliarySequence)
{
    if (auxiliarySequence != NULL)
    {
        printf("%d ", auxiliarySequence->value);
        prints(auxiliarySequence->next);
    }
}

int main()
{
    createFibonacciSequence(15);

    F *auxSequence = list;
    prints(auxSequence);
    printf("\n");

    return 0;
}