#include <stdio.h>

int main() {
    int i,n, last;
    int A[100];

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter elements:");
    for (i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    // Store last element
    last = A[n-1];

    // Shift all elements one position to the right
    for (i = n - 1; i > 0; i--) {
        A[i] = A[i - 1];
    }

    // Put last element at the front
    A[0] = last;

    // Print rotated array
    printf("Array after clockwise rotation: ");
    for (i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }

    printf("\n");
    return 0;
}
