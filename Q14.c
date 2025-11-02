#include <stdio.h>

int main() {
    int n, i, j, count = 0;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int A[n];
    printf("Enter elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    for (i = 0; i < n; i++) {
        int num = A[i];
        int isPrime = 1;

        if (num <= 1) isPrime = 0;
        for (j = 2; j * j <= num; j++) {
            if (num % j == 0) {
                isPrime = 0;
                break;
            }
        }

        if (isPrime) count++;
    }

    printf("Number of prime numbers = %d\n", count);
    return 0;
}