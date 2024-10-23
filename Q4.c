#include <stdio.h>

int main() {
    int range1, range2;
    printf("Enter the range1: ");
    scanf("%d", &range1);
    printf("Enter the range2: ");
    scanf("%d", &range2);

    for (int i = range1; i <= range2; i++) {
        if (i < 2){
		i = 2;
		}
		int checkPrime = 1;
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                checkPrime = 0;
                break;
            }
        }
        if(checkPrime == 1){
            printf("%d ", i);
		}
    }
    return 0;
}
