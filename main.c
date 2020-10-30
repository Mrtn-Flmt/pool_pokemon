/*
** EPITECH PROJECT, 2020
** main.c
** File description:
** main - pokemon _ ruby in c
*/

#include "./struct.h"
#include "./game.c"
#include "player.c"
#include <stdlib.h>
#include <stdio.h>

void crt_pokemon( char *name_a, int life_a, char *type_a)
{
    Pokemon_t Pikachu;
    Pikachu.name = malloc(sizeof(char)*10);
    Pikachu.type = malloc(sizeof(char)*10);
    Pikachu.life = life_a;
    Pikachu.name = name_a;
    Pikachu.type = type_a;
    
    printf("\nNom  : %s\n", Pikachu.name);
    printf("\nVie  : %d\n", Pikachu.life);
    printf("\ntype : %s\n\n", Pikachu.type);
}

void create_type(char *name_a, int hit_a)
{
    Type_t type;
    type.name = malloc(sizeof(char) * 10);
    type.hit = hit_a;
    type.name = name_a;

    printf("name : %s\n", name_a);
    printf("hit : %d\n", hit_a);
}

void create_salameche()
{
    char name[] = "Salameche";
    int life = 15;
    char type[] = "feu";
    crt_pokemon(name,life,type);
}

void create_bulbizar()
{
    char name[] = "Bulbizar";
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
    create_bulbizar();
    create_salameche();
    create_carapuce();
    game();
    return (0);
}
