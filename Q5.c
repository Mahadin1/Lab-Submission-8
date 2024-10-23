#include <stdio.h>

int main() {
    int n;
    printf("Enter the starting odd number: ");
    scanf("%d", &n);

    if (n % 2 == 0) {
        printf("Please enter an odd number.\n");
        return 0;
    }

    for (int i = n; i > 0; i -= 2) {
        for (int j = i; j > 0; j -= 2) {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}
