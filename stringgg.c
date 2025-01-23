#include <stdio.h>

int main() {
    char str[] = "Hello !";
    char arr[] = {'H','E','L','L','O','!'};
     int i = 0;
    while (arr[i] != '\0') { // Loop until the null terminator
        printf("%c ", arr[i]); // Print each character
        i++;
    }

    return 0;
}

