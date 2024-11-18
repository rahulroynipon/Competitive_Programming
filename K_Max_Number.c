#include <stdio.h>

int max(int arr[], int start, int end) {

    if (start == end) {
        return arr[start];
    }

    int mid = (start + end) / 2;

    int maxLeft = max(arr, start, mid);
    int maxRight = max(arr, mid + 1, end);
    return (maxLeft > maxRight) ? maxLeft : maxRight;
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("The maximum element is: %d\n", max(arr, 0, n - 1));

    return 0;
}
