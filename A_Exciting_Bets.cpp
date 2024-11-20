#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long a, b;
        cin >> a >> b;

        if (a == b) {
            cout << "0 0\n";
            continue;
        }

        long long diff = abs(a - b);
        long long moves = min(a % diff, diff - a % diff); 

        cout << diff << " " << moves << "\n";
    }

    return 0;
}
