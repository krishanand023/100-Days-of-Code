// Q108: Product of array except self without division.
#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    int nums[n], answer[n];

    for (int i = 0; i < n; i++) scanf("%d", &nums[i]);

    int prefix = 1;
    for (int i = 0; i < n; i++) {
        answer[i] = prefix;
        prefix *= nums[i];
    }

    int suffix = 1;
    for (int i = n - 1; i >= 0; i--) {
        answer[i] *= suffix;
        suffix *= nums[i];
    }

    for (int i = 0; i < n; i++) {
        printf("%d%c", answer[i], (i == n - 1) ? '\n' : ' ');
    }

    return 0;
}
