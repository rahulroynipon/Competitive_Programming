#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long k, l1, r1, l2, r2;
        cin >> k >> l1 >> r1 >> l2 >> r2;

        long long count = 0;
        for (long long x = l1; x <= r1; x++)
        {
            long long power = 1;
            while (true)
            {
                long long y = x * power;
                if (y > r2)
                    break;
                if (y >= l2)
                {
                    count++;
                }
                if (power > r2 / k)
                    break;
                power *= k;
            }
        }

        cout << count << endl;
    }

    return 0;
}
