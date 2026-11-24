// Q118: Find the missing number in an array containing numbers from 0 to n.
#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    long long expectedSum = (long long)n * (n + 1) / 2;
    long long actualSum = 0;

    for (int i = 0; i < n; i++) {
        int val;
        scanf("%d", &val);
        actualSum += val;
    }

    printf("%lld\n", expectedSum - actualSum);
    return 0;
}
