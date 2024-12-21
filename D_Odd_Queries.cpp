#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> v(n + 1, 0);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i + 1];
            v[i + 1] = v[i] + v[i + 1];
        }

        while (k--)
        {
            int p, q, r;
            cin >> p >> q >> r;
            int total = v[n] - v[q] + v[p - 1] + (q - p + 1) * r;
            cout << (total % 2 ? "YES" : "NO") << endl;
        }
    }

    return 0;
}