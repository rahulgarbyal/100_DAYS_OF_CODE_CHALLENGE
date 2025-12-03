#include<stdio.h>

int get_positive(int *pA,int size);
int get_negative(int *pA,int size);
int get_zero(int *pA,int size);

int main() {
    int posi,negi,zero,n;
    scanf("%d", &n); // get size from user for array.

    int arr[n];

    for (int i=0;i<n;i++) {
        scanf("%d", &arr[i]);    //enter single element in next line and so on .
    }

    posi=get_positive(arr,n);
    negi=get_negative(arr,n);
    zero=get_zero(arr,n);

    printf("Positive=%d, Negative=%d, Zeros=%d \n",posi, negi, zero);

    return 0;
}

int get_positive(int *pA,int size) {
    int count=0;
    for (int i=0;i<size;i++) {
        if (pA[i] > 0) {
            count++;
        }
    }

    return count;
}

int get_negative(int *pA,int size) {
    int count=0;
    for (int i=0;i<size;i++) {
        if (pA[i] < 0) {
            count++;
        }
    }

    return count;
}

int get_zero(int *pA,int size) {
    int count=0;
    for (int i=0;i<size;i++) {
        if (pA[i] == 0) {
            count++;
        }
    }

    return count;
}

