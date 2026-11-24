// Q107: Find the previous greater element for each element in the array.
#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    int arr[n], pge[n], stack[n];
    int top = -1;

    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    for (int i = 0; i < n; i++) {
        while (top >= 0 && stack[top] <= arr[i]) {
            top--;
        }
        pge[i] = (top == -1) ? -1 : stack[top];
        stack[++top] = arr[i];
    }

    for (int i = 0; i < n; i++) {
        printf("%d%c", pge[i], (i == n - 1) ? '\n' : ' ');
    }

    return 0;
}
