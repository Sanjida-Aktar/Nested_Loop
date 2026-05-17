#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int height = N + (6 - (N+1)/2);

    for (int i = 0; i < height; i++) {

        for (int j = 0; j < height - i; j++) {
            printf(" ");
        }

        for (int j = 0; j < 2 * i + 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    for (int i = 0; i < 5; i++) {

        for (int j = 0; j < height - N/2; j++) {
            printf(" ");
        }
        for (int j = 0; j < N; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
