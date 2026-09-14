#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;

    int a[n + 1];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int key;
    if (scanf("%d", &key) != 1) return 0;

    int i = n - 1;
    while (i >= 0 && a[i] > key) {
        a[i + 1] = a[i];
        i--;
    }
    a[i + 1] = key;

    for (int j = 0; j < n + 1; j++) {
        printf("%d%c", a[j], (j == n) ? '\n' : ' ');
    }

    return 0;
}