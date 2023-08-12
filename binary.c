#include <stdio.h>

int binary(long input, int * path, int pathSize) {
    int out = input % 2;
    path[pathSize] = out;

    if ((int) input / 2 > 0) {
        return binary(input / 2, path, pathSize - 1);
    }
    else {
        return pathSize;
    }
}


int negativeBinary(long input, int * path, int pathSize) {
    int out = input % 2;
    path[pathSize] = out;

    if ((int) input / 2 > 0) {
        return binary(input / 2, path, pathSize - 1);
    }
    else {
        return pathSize;
    }
}

int main() {
    long input;
    scanf("%ld", &input);

    if (input == 0) { printf("%d\n", 0); return; }

    int out[64];
    if (input > 0) {
        int index = binary(input, out, 63);
    }
    else {
        int index = negativeBinary(input, out, 63);
    }

    printf("Binary: ");
    for (int k = index; k < 64; k++) {
        printf("%d", out[k]);
    }
    printf("\n");
    printf("(modify the input.in file to change input)\n");
}
