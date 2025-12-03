#include<stdio.h>
int get_even(int *pA, int size);
int get_odd(int *pA, int size);

int main() {
    int n,even_count,odd_count;
    scanf("%d", &n);
    int myarr[n];

    for (int i=0;i<n;i++) {
        scanf("%d", &myarr[i]);
    }

    even_count=get_even(myarr,n);
    odd_count=get_odd(myarr,n);

    printf("Even=%d , Odd=%d \n", even_count, odd_count);

    return 0;
}

int get_even(int *pA,int size) {
    int count=0;
    for (int i=0;i<size;i++) {
        if (pA[i]%2 == 0) {
                count++;
        }
    }

    return count;
}

int get_odd(int *pA, int size) {
    int count=0;
    for (int i=0;i<size;i++) {
        if (pA[i]%2 == 1) {
            count++;
        }
    }

    return count;
}
