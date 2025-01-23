#include <stdio.h>
#include <string.h>
#include <stdbool.h>

typedef struct pokemon {
    int hp;
    int speed;
    int attack;
    char tier;
    char name[15];
} pokemon;

int main() {
    // Declare and initialize a pokemon structure
    pokemon pikachu;
    pikachu.hp = 60;

    // Create a pointer to the pokemon structure
    pokemon* x = &pikachu;

    // Modify the hp using the pointer
    (*x).hp = 70; // Alternatively, you could use x->hp = 70;

    // Print the hp and address of the pokemon structure
    printf("HP of Pikachu: %d\n", pikachu.hp); // Correct format for integer
    printf("Address of Pikachu structure: %p\n", (void*)x); // Correct pointer formatting

    return 0;
}
