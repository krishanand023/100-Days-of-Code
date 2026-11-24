// Q106: Find the next greater element for each element in the array.
#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    int arr[n], nge[n], stack[n];
    int top = -1;

    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    for (int i = n - 1; i >= 0; i--) {
        while (top >= 0 && stack[top] <= arr[i]) {
            top--;
        }
        nge[i] = (top == -1) ? -1 : stack[top];
        stack[++top] = arr[i];
    }

    for (int i = 0; i < n; i++) {
        printf("%d%c", nge[i], (i == n - 1) ? '\n' : ' ');
    }

    return 0;
}
