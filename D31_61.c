#include<stdio.h>

int l_search(int *pA,int size,int element);
int main() {
    int found, search, n,position;
    scanf("%d", &n); //user enters size of element.

    int arr[n];

    for (int i=0;i<n;i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &search); //user enters elements he want to search.

    found = l_search(arr,n,search);
    if (found == -1) {
        printf("%d", found);
    }
    else
        printf("Found at index %d", found);

    return 0;
}

int l_search(int *pA,int size,int element) {
    for (int i=0;i<size;i++) {
        if (pA[i] == element) {
            return i;
        }
    }

    return -1;
}