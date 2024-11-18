#include <stdio.h>
#include <stdlib.h>

int* minMax(int arr[], int n) {
    int* hold = (int*)malloc(2 * sizeof(int));
    if (hold == NULL) {
        exit(1);
    }
    int min = 0, max = 0;
    for (int i = 0; i < n; i++) {
        if (arr[min] > arr[i]) {
            min = i;
        }
        if (arr[max] < arr[i]) {
            max = i;
        }
    }
    hold[0] = arr[min];
    hold[1] = arr[max];

    return hold;
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int* mM = minMax(arr, n);

    printf("%d %d\n", mM[0], mM[1]);
    free(mM);

    return 0;
}
