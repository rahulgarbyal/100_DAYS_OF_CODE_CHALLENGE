#include<stdio.h>
int get_max(int *pA,int size);
int get_min(int *pA,int size);
int main() {
    int max_m,min_m,n;
    scanf("%d", &n);  //user inputs size of array.
    int num_array[n];

    for (int i=0;i<n;i++) {
        scanf("%d", &num_array[i]);
    }
    max_m=get_max(num_array,n);
    min_m=get_min(num_array,n);

    printf("Max=%d Min=%d", max_m, min_m);
    return 0;
}

int get_max(int *pA,int size) {
    int maximum=pA[0];
    for (int i=0;i<size;i++) {
        if (pA[i] > maximum)
            maximum = pA[i];
    }

    return maximum;
}

int get_min(int *pA,int size) {
    int minimum=pA[0];
    for (int i=0;i<size;i++) {
        if (pA[i] < minimum)
            minimum = pA[i];
    }

    return minimum;
}