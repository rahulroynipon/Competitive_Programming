#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n, count = 0;
        cin >> n;

        int i = 1;
        while (true)
        {
            if (count == n)
                break;
            if (i % 3 != 0 && i % 10 != 3)
            {
                count++;
            }

            i++;
        }

        cout << i-1 << endl;
    }

    return 0;
}