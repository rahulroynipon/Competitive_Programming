#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l1;
    int n;

    while (cin >> n && n != -1)
    {
        l1.push_back(n);
    }

    l1.sort();
    l1.unique();

    for (auto i = l1.begin(); i != l1.end(); ++i)
    {
        cout << *i << " ";
    }

    cout << endl;

    return 0;
}
