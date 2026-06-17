#include <stdio.h>

int main() {
    int N, K, M , x;
    scanf("%d %d %d", &N, &K, &M);

    int sum = 0;

    for (int i = 0; i < N - 1; i++) {
        scanf("%d", &x);
        sum += x;
    }
// diclarint this file as a int and sum the input for clauclation .
    int need = N * M - sum;

    if (need <= 0)
        printf("0\n");
    else if (need > K)
        printf("-1\n");
    else
        printf("%d\n", need);

    return 0;
}