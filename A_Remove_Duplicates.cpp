#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    unordered_set<int> unique;

    for (int i = n - 1; i >= 0; i--) {
        unique.insert(arr[i]);
    }


    cout<<unique.size()<<endl;
    for (int num : unique) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
