/*
** EPITECH PROJECT, 2020
** struct.h
** File description:
** package of struct
*/

#ifndef COLOR_H
#define COLOR_H

typedef struct 
{
    char *name;
} Player_t;

typedef struct 
{
    int life;
    char *name;
    char *type;
} Pokemon_t;

typedef struct 
{
    char *name;
    int hit;
} Type_t;

#endif COLOR_H
