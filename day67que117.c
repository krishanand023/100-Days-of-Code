// Q117: Merge two sorted arrays into a single sorted array.
#include <stdio.h>

int main() {
    int m, n;
    if (scanf("%d", &m) != 1) return 0;
    int a[m];
    for (int i = 0; i < m; i++) scanf("%d", &a[i]);

    if (scanf("%d", &n) != 1) return 0;
    int b[n];
    for (int i = 0; i < n; i++) scanf("%d", &b[i]);

    int merged[m + n];
    int i = 0, j = 0, k = 0;

    while (i < m && j < n) {
        if (a[i] <= b[j]) {
            merged[k++] = a[i++];
        } else {
            merged[k++] = b[j++];
        }
    }
    while (i < m) merged[k++] = a[i++];
    while (j < n) merged[k++] = b[j++];

    for (int idx = 0; idx < m + n; idx++) {
        printf("%d%c", merged[idx], (idx == m + n - 1) ? '\n' : ' ');
    }

    return 0;
}
