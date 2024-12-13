#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        vector<int> arr(3);
        for (int i = 0; i < 3; i++) {
            cin >> arr[i];
        }

        int n = 5;
        while (n > 0) {
            sort(arr.begin(), arr.end()); 
            int diff = arr[1] - arr[0]; 

            if (diff == 0) { 
                arr[0]++;
                n--;
            } else {
                int toAdd = min(diff, n); 
                arr[0] += toAdd;
                n -= toAdd;
            }
        }

        int product = arr[0] * arr[1] * arr[2];
        cout << product << endl;
    }

    return 0;
}
