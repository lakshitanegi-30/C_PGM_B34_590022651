//Write a program to swap the first and last digit of a number.

#include <stdio.h>

int main() {
    int num, first, last, temp, digits = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;
    last = temp % 10;

    // Find first digit and count digits
    while (temp >= 10) {
        temp /= 10;
        digits++;
    }
    first = temp;

    // Remove first and last digits
    int divisor = 1;
    for (int i = 0; i < digits; i++) {
        divisor *= 10;
    }

    int middle = num % divisor;     // Remove first digit
    middle = middle / 10;           // Remove last digit

    // Reconstruct number: last * divisor + middle * 10 + first
    int swapped = last * divisor + middle * 10 + first;

    printf("Swapped number = %d\n", swapped);

    return 0;
}
