// Q113: Find the kth smallest element in the array.
#include <stdio.h>
#include <stdlib.h>

int cmpInt(const void *a, const void *b) {
    int x = *(const int *)a;
    int y = *(const int *)b;
    return (x > y) - (x < y);
}

int main() {
    int n, k;
    if (scanf("%d", &n) != 1) return 0;
    int arr[n];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    scanf("%d", &k);

    if (k < 1 || k > n) {
        printf("Invalid k\n");
        return 0;
    }

    qsort(arr, n, sizeof(int), cmpInt);
    printf("%d\n", arr[k - 1]);
    return 0;
}
