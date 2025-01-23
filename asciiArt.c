#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void drawPattern(int size) {
    char symbols[] = {'*', '#', '@', '&', '%', '!'};
    int numSymbols = sizeof(symbols) / sizeof(symbols[0]);

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%c ", symbols[rand() % numSymbols]);
        }
        printf("\n");
    }
}

int main() {
    srand(time(0));
    int size;

    printf("Enter the size of the pattern: ");
    scanf("%d", &size);

    printf("\nYour random ASCII art:\n\n");
    drawPattern(size);

    return 0;
}
12
