#include <stdio.h>
#include <stdlib.h>

// defines an struct
struct point {
    float x;
    float y;
};

// implemented def for simplify use
typedef struct point Point;

int main(void)
{
    // creates a variable type Point to allocate pointer to x and y
    Point *p = (Point*) malloc(sizeof(Point));
    p->x = 1;
    p->y = 5;

    printf("\nO valor do ponto x é: %.2f", p->x);
    printf("\nO valor do ponto y é: %.2f", p->y);
    printf("\n");

    return 0;
}