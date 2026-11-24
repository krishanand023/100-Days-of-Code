// Q103: Calculate the leftmost pivot index of an integer array.
#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    int arr[n];
    long long totalSum = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        totalSum += arr[i];
    }

    long long leftSum = 0;
    for (int i = 0; i < n; i++) {
        long long rightSum = totalSum - leftSum - arr[i];
        if (leftSum == rightSum) {
            printf("%d\n", i);
            return 0;
        }
        leftSum += arr[i];
    }

    printf("-1\n");
    return 0;
}
