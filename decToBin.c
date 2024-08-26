#include <stdio.h>

void printBinary(int num) {
    int bits = sizeof(num) * 8; // Total number of bits in an integer
    int mask = 1 << (bits - 1); // Create a mask with a 1 at the leftmost position

    for (int i = 0; i < bits; i++) {
        // Print 1 if the bit is set, otherwise print 0
        if (num & mask) {
            printf("1");
        } else {
            printf("0");
        }
        // Shift the mask to the right by 1
        mask >>= 1;
    }
}

int main() {
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    printf("Binary representation of %d is: ", number);
    printBinary(number);
    printf("\n");

    return 0;
}
