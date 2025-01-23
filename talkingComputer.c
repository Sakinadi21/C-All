#include <stdio.h>
#include <string.h>

int main() {
    char name[50];
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0'; // Remove newline character

    printf("Hello %s! You look fantastic today!\n", name);
    printf("What's your favorite food? ");

    char food[50];
    fgets(food, sizeof(food), stdin);
    food[strcspn(food, "\n")] = '\0';

    printf("%s? Really? That's... uh, interesting!\n", food);

    char person[50];
    printf("Enter your favorite person name: ");
    fgets(person, sizeof(person),  stdin);
    person[strcspn(person,"\n")] = '\0';

    printf("I hope %s is blissful for u.\nMay Allah bless you both together \n",person);
    printf("Bye for now, %s. Stay awesome!\n", name);

    return 0;
}

