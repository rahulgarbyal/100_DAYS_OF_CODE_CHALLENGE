#include <stdio.h>

int main() {
    int n, x;
    scanf("%d", &n);

    int a[n + 1];   // extra space for new element
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &x);

    int i = n - 1;

    // Shift elements to make space
    while (i >= 0 && a[i] > x) {
        a[i + 1] = a[i];
        i--;
    }

    a[i + 1] = x;   // Insert element

    // Print updated array
    for (int j = 0; j <= n; j++)
        printf("%d ", a[j]);

    return 0;
}
