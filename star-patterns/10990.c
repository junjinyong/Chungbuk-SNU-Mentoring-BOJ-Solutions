#include <stdio.h>

int main(void) {
    int N;

    scanf("%d", &N);

    for (int i = 0, first = N - 1, second = N - 1; i < N; ++i, --first, ++second) {
        for (int j = 0; j <= second; ++j) {
            printf((j == first | j == second) ? "*" : " ");
        }

        printf("\n");
    }

    return 0;
}
