#include <stdio.h>

// Recursive function to calculate the nth Fibonacci number
int fibonacci(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int num_terms;

    printf("Enter the number of terms for the Fibonacci series: ");
    scanf("%d", &num_terms);

    if (num_terms < 0) {
        printf("Invalid input. Please enter a non-negative number of terms.\n");
    } else {
        printf("Fibonacci Series: ");
        for (int i = 0; i < num_terms; i++) {
            // We call fibonacci(i + 1) to start the sequence from 1, 1, ...
            printf("%d ", fibonacci(i + 1));
        }
        printf("\n");
    }
    printf("Name: Megh Rana\nBranch: CE CSPIT\nStudent ID: 25CE099\n");
    return 0;
}