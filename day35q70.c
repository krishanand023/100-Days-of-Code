#include <stdio.h>

void reverse(int arr[], int start, int end)
{
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main()
{
    int n;
    if (scanf("%d", &n) != 1)
        return 0;

    int arr[100];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int k;
    scanf("%d", &k);

    // Normalize k in case k >= n
    k = k % n;

    // Step 1: Reverse the entire array -> [5, 4, 3, 2, 1]
    reverse(arr, 0, n - 1);

    // Step 2: Reverse the first k elements -> [4, 5, 3, 2, 1]
    reverse(arr, 0, k - 1);

    // Step 3: Reverse the remaining n - k elements -> [4, 5, 1, 2, 3]
    reverse(arr, k, n - 1);

    // Print result
    for (int i = 0; i < n; i++)
    {
        printf("%d%c", arr[i], (i == n - 1) ? '\n' : ' ');
    }

    return 0;
}