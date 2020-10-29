#include "./struct.h"
#include <stdlib.h>
#include <stdio.h>

void crt_pokemon( char *name_a, int life_a, char *type_a)
{
    Pokemon Pikachu;
    Pikachu.name = malloc(sizeof(char)*10);
    Pikachu.type = malloc(sizeof(char)*10);
    Pikachu.life = life_a;
    Pikachu.name = name_a;
    Pikachu.type = type_a;
    
    printf("\nNom  : %s\n", Pikachu.name);
    printf("\nVie  : %d\n", Pikachu.life);
    printf("\ntype : %s\n\n", Pikachu.type);
}

void create_salameche()
{
    char name[] = "Salameche";
    int life = 15;
    char type[] = "feu";
    crt_pokemon(name,life,type);
}

void create_bulbizard()
{
    char name[] = "Bulbizard";
    int life = 20;
    char type[] = "terre";
    crt_pokemon(name,life,type);
}

void create_carapuce()
{
    char name[] = "Carapuce";
    int life = 10;
    char type[] = "eau";
    crt_pokemon(name,life,type);
}

int main()
{
    create_bulbizard();
    create_salameche();
    create_carapuce();
    return (0);
}