#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> M(n);
        vector<int> S(n + 1, 0);
        for (int i = 0; i < n; i++)
        {
            cin >> M[i];
        }

        for (int i = 0; i < n; i++)
        {
            cin >> S[i];
        }

        int total = 0;

        for (int i = 0; i < n; i++)
        {
            int diff = M[i] - S[i + 1];
            total += (diff > 0 ? diff : 0);
        }

        cout << total << endl;
    }

    return 0;
}