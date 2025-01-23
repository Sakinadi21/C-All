#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {

    typedef struct pokemon {
        int hp;
        int speed;
        int attack;
        char tier;
        char name[15];
    } pokemon;

    typedef struct legendarypokemon {
        pokemon normal;
        char ability[100];
    } legendarypokemon;

    typedef struct godpokemon {
        legendarypokemon legend;
        int specialattack;
    } godpokemon;

    godpokemon arceus;

    // Assign values correctly
    arceus.specialattack = 300;
    strcpy(arceus.legend.ability, "Turn Anyone to stone");
    arceus.legend.normal.attack = 500;

    printf("%d", arceus.legend.normal.attack);

    return 0;
}
