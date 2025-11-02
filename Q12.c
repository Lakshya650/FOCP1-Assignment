#include <stdio.h>

int main() {
    int scores[100], n ,i;
    int max, min;

    printf("Enter no. of scores: ");
    scanf("%d", &n);

    printf("Enter scores:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &scores[i]);
    }

    max = scores[0];
    min = scores[0];

    for (i = 1; i < n; i++) {
        if (scores[i] > max)
            max = scores[i];

        if (scores[i] < min)
            min = scores[i];
    }

    printf("Max score = %d\n", max);
    printf("Min score = %d", min);

    return 0;
}