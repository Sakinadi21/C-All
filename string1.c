#include <stdio.h>

int main() {
    char arr[] = "Sakiba Belal is my name ";
    int i = 0; // Correctly declare the variable 'i'

    while (arr[i] != '\0') { // Loop until the null terminator
        printf("%c", arr[i]); // Print each character
        i++;
    }

    return 0;
}
