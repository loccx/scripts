#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {

    char mode[7];
    printf("hume, math, or consult?\n");
    scanf("%s", mode);

    float hourLimit;
    if (!strcmp(mode, "hume")) {
        hourLimit = 10.00;
    }
    else if (!strcmp(mode, "math")) {
        hourLimit = 10.00;
    }
    else if (!strcmp(mode, "consult")) {
        hourLimit = 4.00;
    }
    else {
        printf("Mode not found!\n");
        exit(1);
    }

    float currHour;
    float totalHours = 0.0;

    printf("Enter your hours; enter 0 to stop.\n");
    while (scanf("%g", &currHour) != 0 && currHour != 0.0) {
        totalHours+=currHour;
    }
    printf("%f Hours\n", totalHours);
    if (hourLimit - totalHours >= 0) {
        printf("You have %f hours left.\n", hourLimit - totalHours);
    }
    else {
        printf("You went %f hours over. Good job >:)\n", -(hourLimit - totalHours));
    }
}
