#include <stdio.h>

int main() {
    int n, m;

    // Read first array
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    // Read second array
    scanf("%d", &m);
    int b[m];
    for(int i = 0; i < m; i++)
        scanf("%d", &b[i]);

    // Print merged result
    for(int i = 0; i < n; i++)
        printf("%d ", a[i]);

    for(int i = 0; i < m; i++)
        printf("%d ", b[i]);

    return 0;
}
