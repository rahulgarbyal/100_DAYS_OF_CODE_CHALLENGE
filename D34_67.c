#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int a[n + 1]; // extra space for new element
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    int pos, x;
    scanf("%d %d", &pos, &x);

    // Shift elements to the right
    for (int i = n; i > pos; i--) {
        a[i] = a[i - 1];
    }
    a[pos] = x; 
    for (int i = 0; i <= n; i++)
        printf("%d ", a[i]);

    return 0;
}
