#include <stdio.h>

int main() {
    int numbers[3]; // Array to hold the input numbers A, B, C
    int max, min;
    float avg;
    int sum = 0;

    printf("Enter three numbers (A, B, C): ");
    
    // Read 3 numbers into the array
    for(int i = 0; i < 3; i++) {
        scanf("%d", &numbers[i]);
    }

    // Initialize max and min with the first element of the array
    max = min = numbers[0];

    // Find max, min, and calculate sum
    for(int i = 0; i < 3; i++) {
        if(numbers[i] > max) {
            max = numbers[i];
        }
        if(numbers[i] < min) {
            min = numbers[i];
        }
        sum += numbers[i];
    }

    // Calculate average
    avg = sum / 3.0;

    printf("Maximum: %d\n", max);
    printf("Minimum: %d\n", min);
    printf("Average: %.2f\n", avg);

    return 0;
}
