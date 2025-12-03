#include<stdio.h>
int main() {
    int n;
    scanf("%d", &n); //user enters array size.

    int arr[n];    //declared array.

    for (int i=0;i<n;i++) {
        scanf("%d", &arr[i]);
    }

    int rev_arr[n];
    int count=n-1;

    for (int j=0;j<n;j++) {
        rev_arr[j] = arr[count];
        printf("%d ", rev_arr[j]);
        count--; 
    }
    return 0;
}