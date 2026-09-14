#include <stdio.h>

int main()
{
    int n, m;

    if (scanf("%d", &n) != 1)
        return 0;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    if (scanf("%d", &m) != 1)
        return 0;
    int b[m];
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &b[i]);
    }

    int merged[n + m];

    for (int i = 0; i < n; i++)
    {
        merged[i] = a[i];
    }

    for (int i = 0; i < m; i++)
    {
        merged[n + i] = b[i];
    }

    for (int i = 0; i < n + m; i++)
    {
        printf("%d%c", merged[i], (i == n + m - 1) ? '\n' : ' ');
    }

    return 0;
}