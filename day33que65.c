#include <stdio.h>

int main()
{
    int n;
    if (scanf("%d", &n) != 1)
        return 0;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int target;
    if (scanf("%d", &target) != 1)
        return 0;

    int low = 0, high = n - 1;
    int ans = -1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (a[mid] == target)
        {
            ans = mid;
            break;
        }
        else if (a[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    if (ans != -1)
    {
        printf("Found at index %d\n", ans);
    }
    else
    {
        printf("-1\n");
    }

    return 0;
}