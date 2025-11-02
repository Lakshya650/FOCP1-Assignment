#include <stdio.h>

int main() {
    int A[100], n, i;

    printf("Enter no. of elements: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    // Check for peak element
    for (i = 0; i < n; i++) {
        if ((i == 0 || A[i] >= A[i - 1]) && (i == n - 1 || A[i] >= A[i + 1])) {
            printf("Peak element found: %d\n", A[i]);
            return 0;
        }
    }

    printf("No peak element found");
    return 0;
}
