#include <stdio.h>

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

    int pos;
    scanf("%d", &pos);

    // Shift elements left starting from the target position
    for (int i = pos; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    n--;

    // Print resulting array
    for (int i = 0; i < n; i++)
    {
        printf("%d%c", arr[i], (i == n - 1) ? '\n' : ' ');
    }

    return 0;
}