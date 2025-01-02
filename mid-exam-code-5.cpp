#include <bits/stdc++.h>
using namespace std;

void display(const list<int> &l1)
{
    cout << "L -> ";
    for (auto i = l1.begin(); i != l1.end(); ++i)
    {
        cout << *i << " ";
    }
    cout << endl;

    cout << "R -> ";
    for (auto i = l1.rbegin(); i != l1.rend(); ++i)
    {
        cout << *i << " ";
    }
    cout << endl;
}

int main()
{
    list<int> l1;

    int t;
    cin >> t;

    while (t--)
    {
        int x, n;
        cin >> x >> n;

        switch (x)
        {
        case 0:
            l1.push_front(n);
            display(l1);
            break;
        case 1:
            l1.push_back(n);
            display(l1);
            break;
        case 2:
            if (n < l1.size())
            {
                l1.erase(next(l1.begin(), n));
            }
            display(l1);
            break;
        }
    }

    return 0;
}