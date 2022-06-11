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

void createPointAndAddToLast(float x, float y)
{
    Point *p = (Point *)malloc(sizeof(Point));
    p->x = x;
    p->y = y;
    p->next = NULL;

    if (list == NULL)
    {
        list = p;
    }
    else
    {
        Point *anotherAuxiliaryList = list;

        while (anotherAuxiliaryList->next!=NULL)
        {
            anotherAuxiliaryList = anotherAuxiliaryList->next;
        }

        anotherAuxiliaryList->next = p;
    }
}

void removeIndex(int index) 
{
}

void prints(Point *aux)
{
    if (aux != NULL)
    {
        printf("\n Ponto (%.2f, %.2f)", aux->x, aux->y);
        prints(aux->next);
    }
}

int main(void)
{
    createPoint(6, 2);
    createPoint(1, 5);
    createPointAndAddToLast(0, 1);
    createPoint(8, 9);

    Point *auxiliaryList = list;
    prints(auxiliaryList);

    printf("\n");
    return 0;
}