#include<stdio.h>

int main() {
    int n;
    printf("Enter number: \n");
    scanf("%d", &n);

    int count = 0;
    while (n != 0) {
        n = n / 10;
        count++;
    }

    printf("The number of digits is: %d\n", count);
    return 0;
}
