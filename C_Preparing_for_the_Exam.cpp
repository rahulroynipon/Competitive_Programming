#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;

        vector<int> ques(m);
        unordered_map<int, int> ans(k);
        for (int i = 0; i < m; i++)
        {
            cin >> ques[i];
        }

        int x;
        for (int i = 0; i < k; i++)
        {
            cin >> x;
            ans[x] = 1;
        }

        if (n - 1 > k)
        {
            cout << string(n - 1, '0');
            continue;
        }

        


    }

    return 0;
}