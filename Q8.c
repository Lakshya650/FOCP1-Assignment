#include <stdio.h>

int main() {
    int n, i;
    long long first = 0, second = 1, nxt;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid\n");
        return 0;
    }

    printf("Fibonacci Series:\n");

    for (i = 1; i <= n; i++) {
        if (i == 1) {
            printf("%lld", first);
        }
        else if (i == 2) {
            printf(", %lld", second);
        }
        else {
            nxt = first + second;
            printf(", %lld", nxt);
            first = second;
            second = nxt;
        }
    }

    printf("\n");
    return 0;
}