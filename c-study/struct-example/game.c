#include <stdio.h>
#include <string.h>

struct game
{
    char name[50];
    char description[150];
    float value;
} game1;

int main(void) 
{
    strcpy(game1.name, "TOHU");
    strcpy(game1.description, "Experience a brand new adventure game set amongst a world of weird and wonderful fish planets");
    game1.value = 299;

    printf("Nome do jogo: %s", game1.name);
    printf("\n");
    printf("Descrição do jogo: %s", game1.description);
    printf("\n");
    printf("Preço do jogo: %.2f", game1.value);
    printf("\n");
}
