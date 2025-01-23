#include <stdio.h>

int main() {
    char arr[] = {'H','E','L','L','O','!'};
    int i = 0;
    while(arr[i] != '!'){
        printf("%c",arr[i]);
        i++;
    }

    return 0;
}

