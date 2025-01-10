#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        string x;
        cin >> x;

        stack<char> s;

        for (char i : x)
        {

            if (s.empty())
            {
                s.push(i);
            }
            else if (s.top() == '0' && i == '1')
            {
                s.pop();
            }
            else
            {
                s.push(i);
            }
        }

        cout << (s.empty() ? "YES" : "NO") << endl;
    }

    return 0;
}