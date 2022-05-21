#include <stdio.h>

// Number of discs and name of towers
void changeDiscPosition(int number, char a, char b, char c);

int main(void)
{
    int discs = 3;
    changeDiscPosition(discs, 'A', 'B', 'C');
    return 0;
}

void changeDiscPosition(int number, char a, char b, char c)
{
    if (number > 0) {
        changeDiscPosition(number - 1, a, c, b);
        printf("Mover de %c para %c\n", a, b);
        changeDiscPosition(number - 1, c, b, a);
    }
}