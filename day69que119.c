// Q119: Find the single repeated element in one single iteration.
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    int arr[n];
    int maxVal = 0;

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] > maxVal) maxVal = arr[i];
    }

    int *seen = (int *)calloc(maxVal + 1, sizeof(int));
    if (!seen) return 1;

    for (int i = 0; i < n; i++) {
        if (seen[arr[i]]) {
            printf("%d\n", arr[i]);
            free(seen);
            return 0;
        }
        seen[arr[i]] = 1;
    }

    free(seen);
    printf("-1\n");
    return 0;
}
