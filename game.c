/*
** EPITECH PROJECT, 2020
** game.c
** File description:
** Init my game in c
*/

#include "./struct.h"
#include <stdio.h>
#include "./player.c"

void create_player()
{
    Player_t player_one;
    Player_t player_two;

    char name1[] = "Martin";
    char name2[] = "Jules";
    player_one.name = name1;
    player_two.name = name2;

    printf("name : %s\n", player_one.name);
    printf("name : %s\n", player_two.name);
}

void what_yr_name(Player_t player,char *str)
{
    player.name = str;
}

void game()
{
    create_player();
}