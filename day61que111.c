// Q111: First negative integer in each subarray of size k.
#include <stdio.h>

int main() {
    int n, k;
    if (scanf("%d", &n) != 1) return 0;
    int arr[n], negIdx[n];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    scanf("%d", &k);

    int front = 0, rear = -1;
    int firstPrinted = 0;

    for (int i = 0; i < n; i++) {
        if (front <= rear && negIdx[front] <= i - k) {
            front++;
        }
        if (arr[i] < 0) {
            negIdx[++rear] = i;
        }
        if (i >= k - 1) {
            if (firstPrinted) printf(" ");
            if (front <= rear) {
                printf("%d", arr[negIdx[front]]);
            } else {
                printf("0");
            }
            firstPrinted = 1;
        }
    }
    printf("\n");
    return 0;
}
