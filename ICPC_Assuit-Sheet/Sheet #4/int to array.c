#include <stdio.h>

int main() {
    int number, temp, digits = 0;

    // Read an integer from the user
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Determine the number of digits
    temp = number;
    while (temp != 0) {
        temp /= 10;
        digits++;
    }

    // Create an array to hold the digits
    int arr[digits];

    // Insert digits into the array
    for (int i = digits - 1; i >= 0; i--) {
        arr[i] = number % 10;
        number /= 10;
    }

    // Display the digits in the array
    printf("Digits in the array: ");
    for (int i = 0; i < digits; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}