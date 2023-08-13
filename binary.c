#include <stdio.h>
#include <stdlib.h>

int binary(long input, int * path, int pathSize) {
    int out = labs(input % 2);
    path[pathSize] = out;

    if ((int) input / 2 != 0) {
        return binary(input / 2, path, pathSize - 1);
    }
    else {
        return pathSize;
    }
}

int main() {
    // Takes long input
    long input;
    scanf("%ld", &input);

    // If the input is 0, terminate, the binary is 0
    if (input == 0) { printf("%d\n", 0); return 0; }

    int out[64];
    // Initializes output binary sequence; index keeps track of start of binary sequence
    int index = binary(input, out, 63);
    printf("Binary: ");

    // Input is positive
    if (input > 0) {
        for (int k = index; k < 64; k++) {
            printf("%d", out[k]);
        }
        printf("\n");
        printf("(modify the input.in file to change input)\n");
    }

    // Input is negative
    else {
        // Flipping the bits in the sequence
        for (int k = index; k < 64; k++) {
            out[k] = out[k] ^ 1;
        }

        // Adding 1 to the binary sequence
        int carry = 1;
        for (int k = 63; k >= index; k--) {
            if (out[k] == 0 && carry == 1) {
                out[k] = 1;
                break;
            }
            else if (out[k] == 1 && carry == 1) {
                out[k] = 0;
            }
        }

        // Printing the leading 1's for a negative number
        int leadingOnes;
        if ((64 - index) < 8) {
            leadingOnes = 8 - (64 - index);
        }
        else if ((64 - index) < 16) {
            leadingOnes = 16 - (64 - index);
        }
        else {
            leadingOnes = 24 - (64 - index);
        }
        for (int k = 0; k < leadingOnes; k++) {
            printf("%d", 1);
        }

        for (int k = index; k < 64; k++) {
            printf("%d", out[k]);
        }
        printf("\n");
        printf("(modify the input.in file to change input)\n");
    }
}
