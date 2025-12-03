#include <stdio.h>
#include <string.h>

int main() {
    char num[1001];     // enough for up to 1000 digits
    scanf("%s", num);

    int freq[10] = {0};

    // Count digit occurrences
    for (int i = 0; num[i] != '\0'; i++) {
        if (num[i] >= '0' && num[i] <= '9') {
            freq[num[i] - '0']++;
        }
    }

    // Find digit with maximum frequency (smallest digit in case of tie)
    int maxDigit = 0;
    int maxCount = freq[0];

    for (int d = 1; d < 10; d++) {
        if (freq[d] > maxCount) {
            maxCount = freq[d];
            maxDigit = d;
        }
    }

    printf("%d", maxDigit);
    return 0;
}
