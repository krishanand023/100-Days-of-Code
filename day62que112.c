// Q112: Maximum sum of any contiguous subarray using Kadane's algorithm.
#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    int arr[n];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    long long maxSoFar = arr[0];
    long long currMax = arr[0];

    for (int i = 1; i < n; i++) {
        if (currMax + arr[i] > arr[i]) {
            currMax = currMax + arr[i];
        } else {
            currMax = arr[i];
        }
        if (currMax > maxSoFar) {
            maxSoFar = currMax;
        }
    }

    printf("%lld\n", maxSoFar);
    return 0;
}
