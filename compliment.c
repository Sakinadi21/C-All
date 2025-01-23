#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char *compliments[] = {
        "You have a great sense of humor!",
        "Your smile can brighten anyone's day!",
        "You are a coding genius!",
        "You bring out the best in everyone around you!",
        "You are doing an amazing job today!"n
    };

    srand(time(0));
    int randomIndex = rand() % 5;

    printf("Here's your compliment: %s\n", compliments[randomIndex]);

    return 0;
}

