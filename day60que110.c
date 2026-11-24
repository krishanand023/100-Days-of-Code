// Q110: Maximum element in each subarray of size k.
#include <stdio.h>

int main() {
    int n, k;
    if (scanf("%d", &n) != 1) return 0;
    int arr[n], dq[n];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    scanf("%d", &k);

    int front = 0, rear = -1;
    int firstPrinted = 0;

    for (int i = 0; i < n; i++) {
        if (front <= rear && dq[front] <= i - k) {
            front++;
        }
        while (front <= rear && arr[dq[rear]] <= arr[i]) {
            rear--;
        }
        dq[++rear] = i;

        if (i >= k - 1) {
            if (firstPrinted) printf(" ");
            printf("%d", arr[dq[front]]);
            firstPrinted = 1;
        }
    }
    printf("\n");
    return 0;
}
