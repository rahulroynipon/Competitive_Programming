#include <bits/stdc++.h>
using namespace std;

bool binarySearch(long long arr[], long long start, long long end, long long search) {
    if (start > end) { // Base case: If range is invalid, element is not found
        return false;
    }

    long long mid = start + (end - start) / 2; // Avoid overflow in mid calculation

    if (arr[mid] == search) {
        return true; // Element found
    } else if (arr[mid] < search) {
        return binarySearch(arr, mid + 1, end, search); // Search in the right half
    } else {
        return binarySearch(arr, start, mid - 1, search); // Search in the left half
    }
}

int main() {
    int x, y;
    cin >> x >> y;

    long long arr[x];
    for (int i = 0; i < x; i++) {
        cin >> arr[i];
    }

 
    while (y--) {
        long long n;
        cin >> n;

        cout << (binarySearch(arr, 0, x - 1, n) ? "found" : "not found") << endl;
    }

    return 0;
}
