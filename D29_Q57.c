#include<stdio.h>
int main() {
    int n,sum=0;
    scanf("%d", &n);

    int Arr[n];

    for (int i=0;i<n;i++) {
        scanf("%d", &Arr[i]);
        sum+=Arr[i];
    }

    printf("%d", sum);
    return 0;
}