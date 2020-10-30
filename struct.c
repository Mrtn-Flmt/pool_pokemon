#ifndef COLOR_H
#define COLOR_H

typedef struct 
{
    char *name;
    Pokemon_t pkm_arr;
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