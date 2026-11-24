// Q129: Read integers from numbers.txt, compute their sum and average.
#include <stdio.h>

int main() {
    FILE *fp = fopen("numbers.txt", "r");
    if (fp == NULL) {
        printf("Error: Could not open numbers.txt\n");
        return 1;
    }

    int num, count = 0;
    long long sum = 0;

    while (fscanf(fp, "%d", &num) == 1) {
        sum += num;
        count++;
    }

    fclose(fp);

    if (count == 0) {
        printf("No integers found in numbers.txt.\n");
    } else {
        printf("Sum: %lld\nAverage: %.2f\n", sum, (double)sum / count);
    }

    return 0;
}
