#include <bits/stdc++.h>
using namespace std;

int main()
{

    queue<string> q;
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        if (n == 0)
        {
            string x;
            cin >> x;
            q.push(x);
        }
        else if (n == 1)
        {
            if (q.empty())
            {
                cout << "Invalid\n";
            }
            else
            {
                cout << q.front() << '\n';
                q.pop();
            }
        }
    }

    return 0;
}
