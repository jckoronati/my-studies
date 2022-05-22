#include <stdio.h>
#include <stdlib.h>

void createPoint(float x, float y);

struct point
{
    float x;
    float y;
    struct point *next;
};

typedef struct point Point;

Point *list;

void createPoint(float x, float y)
{
    Point *p = (Point *)malloc(sizeof(Point));
    p->x = x;
    p->y = y;
    p->next = list;
    list = p;
}

void prints()
{
    Point *auxiliaryList = list;

    while (auxiliaryList != NULL)
    {
        printf("\nPonto (%.2f, %.2f) ", auxiliaryList->x, auxiliaryList->y);
        auxiliaryList = auxiliaryList->next;
    }
}

int main(void)
{
    createPoint(6, 2);
    createPoint(1, 5);
    prints();
    printf("\n");
    return 0;
}