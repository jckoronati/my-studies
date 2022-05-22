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
    Point *p = (Point*) malloc(sizeof(Point));
    p->x = x;
    p->y = y;
    p->next = list;
    list = p;
}

int main(void)
{
    createPoint(1, 5);
    printf("%.2f \n", list->x);
    printf("\n");
    return 0;
}