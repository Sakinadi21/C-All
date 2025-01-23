#include <stdio.h>
#include <stdbool.h>

int main() {
    typedef struct date {
        int day;
        int month;
        int year;
    } date;

    date a, b;

    // Assign values to date a and date b
    a.day = 13;
    a.month = 5;
    a.year = 2003;

    b.day = 2;
    b.month = 9;
    b.year = 2003;

    bool flag = true;

    // Compare the dates
    if (a.day != b.day) flag = false;
    if (a.month != b.month) flag = false;
    if (a.year != b.year) flag = false;

    // Output the result
    if (flag == true)
        printf("The dates are the same");
    else
        printf("The dates are different");

    return 0;
}
