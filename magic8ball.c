#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char *responses[] = {
        "Yes, definitely!",
        "No way!",
        "Ask again later.",
        "It is certain.",
        "Very doubtful.",
        "You can count on it.",
        "Better not tell you now.",
        "My sources say no."
    };

    char question[100];
    printf("Ask the Magic 8-Ball a question: ");
    fgets(question, sizeof(question), stdin);

    srand(time(0));
    int randomIndex = rand() % 8;

    printf("Magic 8-Ball says: %s\n", responses[randomIndex]);

    return 0;
}

