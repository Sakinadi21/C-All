#include<stdio.h>

int main() {
    int cost;
    int selling;

    printf("Give the cost price: \n");
    scanf("%d", &cost);

    printf("Give the selling price: \n");
    scanf("%d", &selling);

    if (cost > selling) {
        printf("Loss\n");
    }
    else if (cost < selling) {
        printf("Profit\n");
    }
    else {
        printf("No profit, No loss\n");
    }

    return 0; // Added to indicate successful execution
}

