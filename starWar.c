#include <stdio.h>
#include <string.h>
#include <unistd.h>

void scrollText(const char *text) {
    int len = strlen(text);
    for (int i = 0; i < len; i++) {
        for (int j = 0; j < i; j++) {
            printf(" ");
        }
        printf("%s\n", text + i);
        usleep(100000); // Delay for the scrolling effect
    }
}

int main() {
    char text[] = "Jobaida Begum...";
    scrollText(text);
    return 0;
}

