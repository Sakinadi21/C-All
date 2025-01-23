#include<stdio.h>

int main() {
    int marks;
    printf("Enter marks: \n");
    scanf("%d", &marks);

    if (marks >= 90 && marks <= 100) {
        printf("Excellent\n");
    }
    else if (marks >= 80 && marks < 90) {
        printf("Very good\n");
    }
    else if (marks >= 70 && marks < 80) {
        printf("Good\n");
    }
    else if (marks >= 60 && marks < 70) {
        printf("Can do better\n");
    }
    else if (marks >= 50 && marks < 60) { // Corrected range
        printf("Average\n");
    }
    else if (marks >= 40 && marks < 50) { // Corrected range
        printf("Below Average\n");
    }
    else if (marks < 40 && marks >= 0) { // Added for marks less than 40
        printf("Fail\n");
    }
    else {
        printf("Invalid marks. Please enter a value between 0 and 100.\n"); // Handle invalid input
    }

    return 0;
}
