#include <stdio.h>

int main() {
    int n = 3;
    int G[n + 1];

    G[1] = 1;

    for (int i = 2; i <= n; i++) {
        G[i] = 1 + G[i - G[G[i - 1]]];
    }

    for (int i = 1; i <= n; i++) {
        printf("%d ", G[i]);
    }

    return 0;
}