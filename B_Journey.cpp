#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n, arr[3];
        cin >> n;
        for (int i = 0; i < 3; i++)
        {
            cin >> arr[i];
        }

        int day3 = arr[0] + arr[1] + arr[2];
        int temp = n / day3;
        int neededDay = temp * 3;
        int total = temp * day3;

        int i = 0;
        while (n > total)
        {
            total += arr[i];
            neededDay++;
            i = (i + 1) % 3;
        }

        cout << neededDay << endl;
    }

    return 0;
}