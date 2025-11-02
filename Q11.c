#include <stdio.h>

int main() {
    int scores[100], even[100], odd[100];
    int n, i, e = 0, o = 0;

    printf("Enter number of scores: ");
    scanf("%d", &n);

    printf("Enter the scores:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &scores[i]);
    }

    // Separate even and odd
    for (i = 0; i < n; i++) {
        if (scores[i] % 2 == 0)
            even[e++] = scores[i];
        else
            odd[o++] = scores[i];
    }
    printf("\nEven scores: ");
    for (i = 0; i < e; i++)
        printf("%d ", even[i]);

    printf("\nOdd scores: ");
    for (i = 0; i < o; i++)
        printf("%d ", odd[i]);

    printf("\n");
    return 0;
}
